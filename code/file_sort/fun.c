#include "uhead.h"
void urand(int *a,int n)
{
	int i;
	srand(time(0));
	for(i=0;i<n;i++)
	{
		*a++=(int)(100.0*rand()/(RAND_MAX+1.0));
	}
}
int usum(int *a,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=*a++;
	}
	return sum;
}
void ushow(int *a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,*a++);
	}
}

