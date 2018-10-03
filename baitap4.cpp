#include<stdio.h>
#include<math.h>
//so Nguyen to la so chi chia het cho 1 va chinh no
int soNT(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;		
	}

	return 1;
		
}

main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	if(soNT(a)==1)
		printf("Day la so NT");
	else 
		printf("Khong pha la so NT");
}
