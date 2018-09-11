#include<stdio.h>
//de quy dao nguoc cac so nguyen duong;
int  dao(int n){
	if(n!=0){
		printf("%d",n%10);
		dao(n/10);
	}
}
//dem so luon so nguyen duong
int dem(int n){
	if(n==0)
		return 0;
	if(n!=0){
		return dem(n/10)+1;
	}
}
//tim gtln
int gtln(int n,int max){
	int m=n%10;
	if(n==0)
		return max;
	if(n!=0){
		if(m>max){
			max=m;
		}
		gtln(n/10,max);
	}
	
}
//logarit co so 2 cua n
int logarit(int n){
	if(n<0)
		return -1;
	else
		if(n>=2)
			return 1 + logarit(n/2);
		else
			return 0;
}
int tichle(int n,int x){
	if(n<0)
		return 0;
	if(n==0)
		return x;
	if(n!=0)
		if(n%10%2==1)
			x=x*n%10;
	 tichle(n/10,x);
}
main(){
	printf("%d",tichle(323,1));
}

