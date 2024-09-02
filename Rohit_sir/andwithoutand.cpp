#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter number"<<endl;
	cin>>n>>m;
	cout<<(~(~n|~m));
}

