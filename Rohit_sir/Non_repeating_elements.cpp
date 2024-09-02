#include<iostream>
#include<string.h>
#include<unordered_map>
using namespace std;
int largest(string s)
{
	int l=0;
	int r=0;
	int y=0;
	unordered_map<char,int>mp;
	int n=s.length();
	while(r<n)
	{
		if(!mp.empty()&&mp.find(s[r])!=mp.end())
		{
			if(l<=mp[s[r]])
                        {
                                l=mp[s[r]]+1;
                        }


		
		}
		y=max(y,r-l+1);
		mp[s[r]]++;
		r++;

	}
return y;
}
int main()
{
	cout<<"enter string";
	string s;
	cin>>s;
	cout<<largest(s);
}
