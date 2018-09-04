#include<stdio.h>
#include<math.h>
main(){
	int x,n,i=1;
	int s=0;
	printf("Nhap x va` n: ");
	scanf("%d%d",&x,&n);
	while(i<=n){
		s+=(int)pow(x,i++);
	}
	printf("S(n)=x+x^2+x^3...x^n=%d",s);
}
