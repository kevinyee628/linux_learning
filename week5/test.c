#include "lib.h"
int main(){
	int *p = NULL;
	p = userrand();
	printf("max=%d",max(p,10));
	printf("sum=%d",sum(p,10));
	return 0;
}
