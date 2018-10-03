#include<stdio.h>
#include<stdlib.h>
typedef struct PHANTU{
	int dulieu;
	PHANTU *tiep;
};
main(){
	int x;
	PHANTU *d,*tg,*p;
	d=NULL;
	do{
		x= rand()%(15+1);
		if(x!=0)
		{
			p=(PHANTU*)malloc(sizeof(PHANTU));
			p->dulieu=x;
			p->tiep=NULL;
			if(d==NULL)
				d=p;
			else
				tg->tiep=p;
			tg=p;
		}
	}while(x!=0);
	p=d;
	while(p!=NULL)
	{
		printf(" %d ",p->dulieu);
		p=p->tiep;
	}
}
