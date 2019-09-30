#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 100

typedef struct arg{
	int array[NUM];
	int sum;
	double avg;
}myargs;
void urand(int *,int);
int usum(int *,int);
void ushow(int*,int);
void operate(myargs *,int);
void avg(int *,int,float *);
void bsort(void *,size_t,size_t,int (*cmp)(void *,void *));
