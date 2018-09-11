#include<stdio.h>
#include<conio.h>
#include<math.h>
void bai8(int *x,int *y){
	float UCLN,BCNN;
	int a=abs(*x);
	int b=abs(*y);
	while(a!=b && a*b!=0){
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	if(a*b==0){
		UCLN=a+b; BCNN=abs((*x) * (*y))/(a+b);
	}	
	else
		UCLN=a;BCNN=abs((*x) * (*y))/a;
	printf("UCLN =%.3f,BCNN=%0.3f ",UCLN,BCNN);
}
main(){
	int x,y;
	printf("Moi nhap x va y: ");
	scanf("%d%d",&x,&y);
	bai8(&x,&y);
}
