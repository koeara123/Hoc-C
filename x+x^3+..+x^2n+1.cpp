#include<stdio.h>
#include<math.h>
main(){
	int x,n,i=0;
	int s=0;
	printf("Nhap x va` n: ");
	scanf("%d%d",&x,&n);
	while(i<=n){
		s+=(int)pow(x,2*i+1);
		i++;
	}
	printf("S(n)=x+x^3+x^5...x^2n+1=%d",s);
}
