#include<stdio.h>
soHH(int n){
	int i;
	int s=0;
	for(i=1;i<n;i++){
		if(n%i==0)
			s+=i;		
	}
	if(s==n){
		printf("Day la so HH");
	}
	else
		printf("Day khong phai la so HH");
}
main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	soHH(n);
}
