#include<stdio.h>
#include<stdlib.h>
typedef struct sinhvien{
	int dtb;
};
int dem(sinhvien x[],int n){
	if(n==0)
		return 0;
	if(x[n].dtb>5)
		return dem(x,n-1)+1;
	return dem(x,n-1);
}
main(){
	int n=3,i,dtb;
	sinhvien sv[n];
	for(i=1;i<=n;i++){
		printf("Nhap dtb: sv[%d]: ",i);
		scanf("%d",&dtb);
		sv[i].dtb=dtb;
		fflush(stdin);
	}
	printf(" %d ",dem(sv,i));
}
