// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fibo(int n,int i,int a,int b)
{
    static int s=0;
    if(i==n-2)
    {
        return s;
    }
    int c=a+b;
    if(c%2==0)
    s=s+c;
    cout<<s;
    a=b;
    b=c;
    fibo(n,i+1,a,b);
    return s;
}
int main() {
    int n;
    cin>>n;
    int a=1;
    int b=1;
    cout<<fibo(n,0,a,b);
}
