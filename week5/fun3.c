int* userrand(int n){
	int i;
	int a[n];
	srand((int)time(0));
	for(i=0;i<n;i++)
		a[i]=rand();		
	return a;
}
