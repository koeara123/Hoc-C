#include<stdio.h>
float bai15(int x){
	float s=0;
	float tg=0;
	int i=1;
	while(i<=x){
		tg+=i++;
		s+=1/tg;
	}
	return s;
}
main(){
	float x=bai15(2);
	printf("%0.3f",x);
}
