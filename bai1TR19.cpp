#include<stdio.h>
#include<stdlib.h>
void menu();
void thucThi(int a,int b,int c){
	switch(c){
		case 1: printf("%d+%d=%d",a,b,a+b);break;
		case 2:	printf("%d-%d=%d",a,b,a-b); break;
		case 3: printf("%d*%d=%d",a,b,a*b);break;
		case 4: printf("%d/%d=%0.3f",a,b,(float)a/b);break;
		case 5: printf("%d %% %d=%d",a,b,a%b);break;
		case 6: exit(0);
		default: printf("ket qua khong phu hop");
	}
}
int lChon(){
	menu();
	int n;
	printf("\nNhap n: ");
	scanf("%d",&n);		
	return n;
}
void menu(){
	char arr[6][20] ={"1/phep cong","2/phep tru","3/phep nhan","4/phep chia","5/phep chia lay du","6/ket thuc"};
	int i,j;
	for(i=0;i<=5;i++){
		printf("\n%s",arr[i]);
	}
}
void run(int a,int b){
	bool bol=true;
	while(bol){
		int c=lChon();
		if(c<1 || c>6){
			printf("Nhap sai moi nhap lai : \n");
			continue;
		}
		thucThi(a,b,c);
	}
}
main(){
	int a,b;
	printf("Nhap a va b: ");
	scanf("%d%d",&a,&b);
	run(a,b);
}
