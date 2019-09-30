#include "uhead.h"
void bsort(void *base,size_t num,size_t size,int (*cmp)(const void *elem1,const void *elem2)
{
	int i,j;
	for(i = 0; i < num -1; i++)
	{
		for(j = i; j < num -1 -i; j++)
		{
			if(cmp((char*)base + j*size, (char*)base + (j + 1)*size) > 0)
			{
				void *temp = ((char*)base + j*size);
				*((char*)base + j*size) = *((char*)base + (j + 1)*size);
				*((char*)base + (j + 1)*size) = *temp;
			}
		}
	}
}
