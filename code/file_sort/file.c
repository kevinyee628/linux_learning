#include "uhead.h"
void file_read(const char *pathname, int n, int *a)
{
	FILE *fd;
	int i;
	if((fd = fopen(pathname, "r")) != NULL)
	{
		for(i = 0; i < n; i++)
		{
			fscanf(fd,"%d",a[i]);
		}
	}
	else
		exit(1);
}
void file_write(const char *pathname,int n, int *a)
{
	FILE *fd;
	int i;
	if((fd = fopen(pathname, "w")) != NULL)
	{
		for(i = 0; i < n; i++)
		{
			fprintf(fd,"%d\n",a[i]);
		}
	}
	else
		exit(1);
}
void create_file(const char *filename)
{
	if(creat(filename,0666)<0)
	{
		printf("create file %s failure!\n", filename);
		exit(EXIT_FAILURE);
	}
	else{
		printf("create file %s success!\n",filename);
	}
}
