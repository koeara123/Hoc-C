#include<stdio.h>
#include<math.h>
int s1(int n){
	int s=0,i;
	for(i=0;i<n;i++){
		s+=(2*i+1);
	}
	return s;
}
int s2(int n){
	int s=0,i=1;
	while(i<=n){
		s+=i*2;
		i++;
	}
	return s;
}
float s3(int n){
	if(n==0){
		printf("Khong the thuc hien");
		return 0;
	}
	int s=0,i=1;
	while(i<=n){
		s+=1/i;
		i++;
	}
	return n;
}
float s4(int n){
	int i=0,j=0, gt=1,s=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			gt*=j;
		}
		s+=(1.0/gt);
	}
	return s;
	
}
double s5(int n){
	int i,j;
	int s=0;
	for(i=1;i<=n;i++){
		s+=i*i;
	}
	return sqrt(s);
}
main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("cua S1=1+2=3+...(2*n+1)=%d",s1(n));
	printf("\nS2=2+4+6+..n*2=%d",s2(n));
	printf("\nS3=%0.2f",s3(n));
	printf("\nS4=%0.2f",s4(n));
	printf("\nS5=%f",s5(n));
	
	
}
