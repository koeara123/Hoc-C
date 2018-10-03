#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//KIem Tra mang co chua toan so nguyen to
int soNT(int a,int n){
	int i;
	if(a<2)
		return 0;
	for(i=2;i<=sqrt(n);i++){
		if(a/i%2==0)
			return 0;
	}
	return 1;
}
void kiemTra(int a[],int n){
	int i;
	for(i=1;i<=n;i++){
		if(soNT(a[i],n)==1)
		{
			printf("Day la mang toan so Nguyen to");
			break;
		}
		else if(soNT(a[i],n)==0)
			printf("Day la mang toan so nguyen to");
	}

}
void nhapMang(int a[],int *n){
	int i;
	printf("Nhap so phan tu mang: ");
	scanf("%d",n);
	for(i=1;i<=*n;i++){
		fflush(stdin);
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}	
main(){
	int a[100],n;
	nhapMang(a,&n);
	kiemTra(a,n);
}
