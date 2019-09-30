#include "uhead.h"
void bsort(void *base, size_t num, size_t size, int (*cmp)(const void *elem1,const void *elem2))
{
	int i,j;
	for(i = 0; i < num -1 ; i++)
	{
		for(j = i; j < num -1; j--)
		{
			if(cmp((char*)base + j*size, (char*)base + (j + 1)*size) > 0)
			{
				swap((char*)base + j*size,(char*)base + (j + 1)*size, size);
			}
		}
	}
}
int compare1(const void * e1, const void *e2)
{
	return (*(int*)e1) > (*(int*)e2); 
} 
int compare2(const void * e1, const void *e2)
{
	return (*(int*)e1) < (*(int*)e2); 
} 
void swap(char *a, char *b, size_t width)
{
	char tmp;
    if (a != b)
    while (width--) {
        tmp = *a;
        *a++ = *b;
        *b++ = tmp;
    }	
}

void syssort(void *base, size_t num, size_t size,int (*cmp)(const void *, const void *), void (*sort)(void *, size_t, size_t, int (*cmp)(const void *, const void *)))
{
	//time_t timep1, timep2;
	//time(&timep1);
	struct timeval tv1,tv2;
	struct timezone tz;
	gettimeofday(&tv1,&tz);
	sort(base, num, size, cmp);
	gettimeofday(&tv2,&tz);
	printf("tv2_usec-tv1_usec = %d\n",tv2.tv_usec - tv1.tv_usec);
	//time(&timep2);
	//printf("sort time = %f\n",difftime(timep2,timep1));
}
