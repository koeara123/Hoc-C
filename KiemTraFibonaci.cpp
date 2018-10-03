#include<stdio.h>
//Kiem tra fibo
void fibo(int n){
	int t=0;
	int s=1;
	int tg=0,j;
	while(tg<=n){
		tg=t+s;
		t=s;
		s=tg;
		printf("%d, ",s);
	}
	if(tg==n)
		printf("\nso %d la so fibonaci\n",n);
	else
		printf("\nso %d Khong phai la fibonaci\n",n);

	while(tg<900){
		tg=t+s;
		t=s;
		s=tg;
		printf("%d, ",tg);
	}
}
main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	fibo(n);
}
