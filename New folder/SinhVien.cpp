#include<stdio.h>
#include<stdlib.h>
typedef struct Diem{
	float diem;
};
typedef struct sinhvien{
	char ten[20],lop[4];
	typedef struct diem{
		float toan,ly,hoa;
	};
	diem d;
	float dtb;
};
int nhapDSSV(sinhvien sv[]){
	int n,i;
	float dtb;
	i=1;
	do{	
		printf("1/De tiep tuc\n ");
		printf("0/De dung chuong trinh\n ");
		printf("nhap n: ");
		scanf("%d",&n);
		if(n==1){
			fflush(stdin);
			printf("nhap ten ");
			gets(sv[i].ten);
			printf("Nhap lop ");
			gets(sv[i].lop);
			printf("Nhap dHoa: ");
			scanf("%f",&sv[i].d.hoa);
			printf("Nhap DLy: ");
			scanf("%f",&sv[i].d.ly);
			printf("nhap dtoan: ");
			scanf("%f",&sv[i].d.toan);
			sv[i].dtb=(sv[i].d.toan+sv[i].d.ly+sv[i].d.hoa)/3;
			i++;
		}
		else if(n>1 || n< 0)
			printf("\n Lchon khong hop le ! \n");
	}while(n!=0);
	return i-1;
	
}
void sapXep(sinhvien sv[], int n){
	int i,k;
	sinhvien tg;
	for(i=n;i<=n;i++){
		for(k=i+1;k<=n;k++){
			if(sv[i].dtb > sv[k].dtb)
			{
				tg=sv[i];
				sv[i]=sv[k];
				sv[k]=tg;
			}
		}
	}
}
void inDSSV(sinhvien sv[],int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%s \t | %s \t|%0.2f\n",sv[i].ten,sv[i].lop,sv[i].dtb);
	}
}
main(){
	sinhvien sv[30];
	int n=nhapDSSV(sv);
	inDSSV(sv,n);
}
