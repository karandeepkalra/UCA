#include<stdio.h>
void append()
{
	FILE * fileptr;
	char name[100];
	printf("Enter filename:");
	scanf("%[^\n]%*c",name);
	fileptr=fopen(name,"r");
	if(fileptr==NULL)
	{
		printf("file not found");
		return;
	}
	char str[100];
	printf("enter string:");
	scanf("%[^\n]%*c",str);
	fileptr=fopen(name,"a");
	fprintf(fileptr,"%s",str);
	fclose(fileptr);
	printf("appended successfully");
}
int main()
{
	append();
	return 0;
}


