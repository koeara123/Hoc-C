#include<stdio.h>
main(){
	int a,b,c,d;
	for(a=0;a<=10;a++){
		for(b=0;b<=10;b++){
			for(c=0;c<=10;c++){
				for(d=0;d<=10;d++){
					if(a!=b && a!=c && a!=d && b!=c && b!= d && c!=d && a*d*d==b*c*c*c)
						printf("%d %d %d %d \n",a,b,c,d);
				}
			}
		}						
	}
}
