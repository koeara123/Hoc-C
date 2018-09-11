#include<stdio.h>
#define MAX 10
void tongSN(int a){
	int i,du;
	int b[MAX];
	int dem=0;
	while(a!=0){
		du=a%10;
		b[dem++]=du;
		a=a/10;
	}
	for(i=1;i<dem;i++)
		b[0]=b[0]+b[i];	
	printf("co %d so va tong la: %d",dem,b[0]);
}
main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	tongSN(a);
}
