#include "uhead.h"
int main()
{
	int a[NUM];
	urand(a,NUM);
	ushow(a,NUM);
	printf("sum=%d\n****************\n",usum(a,NUM));
	myargs b;
	operate(&b,NUM);
	ushow(b.array,NUM);
	printf("sum=%d\navg=%f\n",b.sum,b.avg);
}
