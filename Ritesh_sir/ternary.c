#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d %d %d",&a,&b,&n);
	int c=-n;
	printf("%d",(c&a)|(~c&b));
}
