#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void do_nse(vector<int>&v,int arr[],int n)
{
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty()&&arr[s.top()]>=arr[i])
            {
                s.pop();
            }
        if(s.empty())
        {
            v[i]=n;
        }
        else{
            v[i]=s.top();
        }
        s.push(i);
    }
}
void do_pse(vector<int>&v,int arr[],int n)
{
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        while(!s.empty()&&arr[s.top()]>=arr[i])
            {
                s.pop();
            }
        if(s.empty())
        {
            v[i]=-1;
        }
        else{
            v[i]=s.top();
        }
        s.push(i);
    }
}
int main()
{
    int arr[7];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>nse(n);
    vector<int>pse(n);
    do_nse(nse,arr,n);
    do_pse(pse,arr,n);
    int maxm=0;
    for(int i=0;i<n;i++)
    {
        int s=(abs(nse[i]-pse[i])-1)*arr[i];
        maxm=max(maxm,s);
    }
    cout<<maxm;
}
