#include<stdio.h>
#include<stdlib.h>
void doc(int n){
	switch(n){
		case 0: printf("khong "); break;
		case 1: printf("mot "); break;
		case 2: printf("hai "); break;
		case 3: printf("ba "); break;
		case 4: printf("bon "); break;
		case 5: printf("nam "); break;
		case 6: printf("sau "); break;
		case 7: printf("bay "); break;
		case 8: printf("tam "); break;
		case 9: printf("chin "); break;
	}
		
}
void ktr(int a){
	int dem=0;
	int b=a;
	int du,n=0;
	while(b!=0){
		du=b%10;
		b=b/10;
		dem++;
		n=n*10+du;	
	}
	if(dem!=3){
		printf("Nhap sai  !");	
		exit(0);
	}
	while(n!=0){
		du=n%10;
		if(n>100){
			doc(du);
			printf(" tram  ");
		}
			
		else if(n>10){
			doc(du);
			printf(" muoi  ");
		}
			
		else{
			doc(du);
		}
			
		n=n/10;
		
		
	}
}

main(){
	int a;
	printf("moi nhap a: ");
	scanf("%d",&a);
	ktr( a);
}
