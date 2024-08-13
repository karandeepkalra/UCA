#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a-b;
}
int multiply(int a,int b)
{
	return a*b;
}
int divide(int a,int b)
{
	return a/b;
}
void print(int a,int b,int(*fun)(int,int))
{
	int val=fun(a,b);
	printf("%d",val);
}
int main()
{
	print(1,2,add);
	print(3,1,multiply);
	print(4,2,subtract);
	print(8,2,divide);
	return 0;
}
