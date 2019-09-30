#include "uhead.h"
const char MY_FILE[] = "1.txt";
int main()
{
	int a[NUM];
	urand(a, NUM);
	//ushow(a, NUM);
	create_file(MY_FILE);
	//file_write(MY_FILE, NUM, a);
	//file_read(MY_FILE, NUM, a);
	printf("sum=%d\n****************\n", usum(a, NUM));
	syssort(a, NUM, 4, compare1, bsort);
	ushow(a,NUM);
	syssort(a, NUM, 4, compare2, qsort);
	ushow(a,NUM);
	file_write(MY_FILE, NUM, a);
	printf("\ndf\n");
}
