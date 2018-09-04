#include<stdio.h>
#include<stdlib.h>
#define max 10
int* uocSo(int n){
	int i=0;
	int dem=0;
	static int a[max];
	for(i=1;i<=n;i++){
		if(n%i==0)
			a[dem++]=i;
	}
	
	return a;
}
main(){
	int n,i;
	printf("Nhap n: ");
	scanf("%d",&n);
	int *a=uocSo(n);
	for( i=0;i<5;i++){
		if(*(a+i) != 0)
			printf("*(a+%d)=%d\n",i,*(a+i));
		else
			exit(1);
	}
		
}
