#include<stdio.h>
//fibobaci
int fibo(int i){
	int t=0;
	int s=1;
	int tg,j;
	for(j=1;j<=i;j++){
		tg=t+s;
		t=s;
		s=tg;
	}
	return s;
}
main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
		printf("%d,",fibo(i));
}
