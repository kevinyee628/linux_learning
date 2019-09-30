#include "uhead.h"
void operate(myargs *b,int n)
{
	int i,j,sum=0;
	srand(time(0));
	for(i=0;i<n;i++)
	{
		j=(int)(100.0*rand()/(RAND_MAX+1.0));
		b->array[i]=j;
		sum+=j;
	}
	b->sum=sum;
	avg(b->array,NUM,b->avg);
}
void avg(int *b,int n,float *avgs)
{
	int sum = usum(b,n);
	avgs=((float)sum)/NUM;
}
