#include<stdio.h>
#define  max 10
float tbc(int a){
	int i,du;
	int tong=0;
	int dem=0;
	while(a!=0){
		du=a%10;
		a=a/10;
		tong+=du;
		dem++;
	}	
	return tong*1.0/dem;
}
main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	float b=tbc(a);
	printf("tbc=%f",b);
}
