#include<stdio.h>
void add()
{
	printf("%d",4+3);
}
void sub()
{	printf("%d",4-3);}
void mul()
{
    printf("%d",4*3);
}
void div()
{
	printf("%d",4/3);
}
int main()
{
	int choice;
	printf("enter choice");
	scanf("%d",&choice);
	void(*operation)();
	switch(choice)
	{
		case 1:operation=add;
		      break;
		case 2:operation=sub;
		       break;
		case 3:operation=mul;
		       break;
		case 4:operation=div;
		      break;
		default:
		       printf("invalid choice");
		       break;
	}
	operation();
	return 0;
}
