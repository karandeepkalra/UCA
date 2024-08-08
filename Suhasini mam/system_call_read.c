#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int fd,sz;
	char buffer[100];
	fd=open("foo.txt",O_RDONLY);
	if(fd<0)
	{
		perror("error opening file");
	//	free(buffer);
		exit(1);
	}
	sz=read(fd,buffer,10);
	if(sz<0)
	{
		perror("error reading file");
		close(fd);
		//free(buffer);
		exit(1);
	}
	printf("caled read(%d,c,10).Returned that %d bytes were read\n",fd,sz);
	buffer[sz]='\0';
	printf("done:%s",buffer);
	close(fd);
	//free(buffer);
	return 0;
}
