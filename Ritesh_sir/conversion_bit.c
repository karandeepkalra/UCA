#include <stdio.h>

int main()
{
	int n,a,p;
	scanf("%d %d %d",&a,&n,&p);
	int c=(1<<n)-1;
	c=c<<p;
	printf("%d",a^c);
}
