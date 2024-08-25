#include <iostream>
#include <vector>
using namespace std;
int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>a(n,1);
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                a[i]=a[i-1]+1;
            }
        }
        int s=a[n-1];;
        for(int i=n-2;i>=0;i--)
        {
            cout<<s<<" "<<a[i]<<endl;
            if(ratings[i]>ratings[i+1]&&a[i]<=a[i+1])
            {
                a[i]=a[i+1]+1;
            }
            s=s+a[i];
            cout<<s<<" "<<a[i]<<endl;

        }
        return s;
    }
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<candy(v);
}
