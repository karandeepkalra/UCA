#include<stdio.h>
#include<sys/resource.h>
int main()
{
	struct rusage start;
	getrusage(RUSAGE_SELF,&start);
	int *arr=(int*)malloc(1000000*sizeof(int));
	struct rusage end;
        getrusage(RUSAGE_SELF,&end);
	long memory_used=end.rumaxrss-start.rumaxrss;
	printf("memory used:%ld",memory_used);
	free(arr);
}

