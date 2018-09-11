#include<stdio.h>
#define  max 10
void daoNguoc(int a){
	int i,du;
	int b[max];
	int dem=0;
	while(a!=0){
		du=a%10;
		b[dem++]=du;
		a=a/10;
	}	
	for(i=0;i<dem;i++)
		printf("%d",b[i]);
}
main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	daoNguoc(a);
}
