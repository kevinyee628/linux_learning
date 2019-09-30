#include "uhead.h"
int main()
{
	int a[NUM];
	urand(a,NUM);
	ushow(a,NUM);
	printf("sum=%d\n",usum(a,NUM));
}
