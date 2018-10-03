#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//dem so lan xuat hien phan tu x nao do trong mang ;
void xoaMang(int b[],int *tg,int vt){
	int i;
	for(i=vt;i<=*tg;i++){
		b[i]=b[i+1];
	}
	*tg=*tg-1;
}
void demSo(int a[],int n){
	int i=1;
	int b[100],k,dem=1;
	int tg=n;
	for(i=1;i<=n;i++){
		b[i]=a[i];
	}
	i=1;
	printf("--------------Dem So---------------\n");
	while(i<=tg){
		k=i+1;
		while(k<=n){
			if(b[i]==b[k]){
				dem++;
				xoaMang(b,&tg,k);
			}
			else
				k++;
			n=tg;
		}
		printf("a[%d] =%d xuat hien: %d lan \n",i,b[i],dem);
		dem=1;
		i++;
	}
}
int soNT(int n){
	int i;
	if(n<2)
		return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;		
	}
	return 1;
}
void KTSNT(int a[],int n){
	int i;
	printf("--------------Tim so nguyen to trong mang---------------\n");
	
	for(i=1;i<=n;i++){
		if(soNT(a[i])==1)
			printf("a[%d]=%d , la so NT\n",i,a[i]);
	}
}
void nhapMang(int a[],int n){
	int i;
	for(i=1;i<=n;i++){
		a[i]=rand()%(3-0+1)+3;
	}
}
void xuatMang(int a[],int n){
	int i;
	for(i=1;i<=n;i++){
		printf("a[%d]= %d\n",i,a[i]);
	}
}
main(){
	int n,a[100];
	printf("nhap phan tu mang : ");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	demSo(a,n);
	
}
//viet ham kiem tra mang co doi sung hay khong,mang co phai la mang tang hay khong
// viet ham kiem tra mang co phai la mang chua toan so nguyen to khong
//viet chuong trinh nhap mang cac so nguyen N, va liet ke cac so nguyen to nho hon N
//viet ham dem cac phan tu la so nguyen to trong mang 
