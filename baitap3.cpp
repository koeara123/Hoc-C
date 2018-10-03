#include<stdio.h>
void 
soHH(int n){
	int i;
	int s=0;
	for(i=1;i<n;i++){
		if(n%i==0)
			s+=i;		
	}
	if(s==n){
		printf("Day la so Hoan Hao");
	}
	else
		printf("Day khong phai la so Hoan Hao");
}
main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	soHH(n);
}
