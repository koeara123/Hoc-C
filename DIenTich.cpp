#include<stdio.h>
#include<stdlib.h>
#define pi 3,14
#include<math.h>
void menu();
double dthTron(){
	double r;
	printf("Nhap ban kinh: ");
	scanf("%f",&r);
	return pow(r,2)*pi;
}
int dthThang(){
	int d,r,c;
	printf("Nhap Chieu Dai ,chieu rong va chieu cao: ");
	scanf("%d%d%d",&d,&r,&c);
	return d*r*c;
	
}
int dthChuNhat(){
	int cd,cr;
	printf("Nhap cd, cr: ");
	scanf("%d%d",&cd,&cr);
	return cd*cr;
}

void thucThi(int c){
	switch(c){
		case 1: printf("dt Hinh tron= %0.3f \n",dthTron()); break;
		case 2:	printf("dt Hinh thang = %d\n",dthThang());break;
		case 3: printf("dt Hinh chu nhat = %d\n",dthChuNhat());break;
		case 4: exit(0);
		default: printf("ket qua khong phu hop");
	}
}

void menu(){
	char arr[4][30] ={"1/DTHinh Tron","2/Dien tich hinh thang","3/Dien Tich hinh chu nhat","4/ket thuc"};
	int i,j;
	for(i=0;i<=3;i++){
		printf("\n%s\n",arr[i]);
	}
}
int lChon(){
	menu();
	int n;
	printf("\nNhap n: ");
	scanf("%d",&n);		
	return n;
}

void run(){
	bool bol=true;
	while(bol){
		int c=lChon();
		if(c<1 || c>4){
			printf("Nhap sai moi nhap lai : \n");
			continue;
		}
		thucThi(c);
	}
}
main(){
	run();
}
