#include<stdio.h>
int cmp1(int a,int b)
{
	
	return a>b;
}
int cmp2(int a,int b)
{

	return a<b;
}
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void bubblesort(int *arr,int n,int(*cmp)(int,int))
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(cmp(arr[j],arr[j+1]))
			{
			swap(&arr[j],&arr[j+1]);
			}
		}
	}

}
void print(int*arr)
{
for(int i=0;i<5;i++)
printf("%d",arr[i]);
printf("\n");
}
int main()
{
	int arr[5]={2,1,5,3,7};
	bubblesort(arr,5,cmp1);
	print(arr);
	bubblesort(arr,5,cmp2);
	print(arr);
	return 0;
}
