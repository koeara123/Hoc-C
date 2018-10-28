#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct danhsach{
	int so;
	danhsach *tiep;
};
typedef struct danhsachChan{
	int so;
	danhsachChan *tiep;
};
typedef struct danhsachLe{
	int so;
	danhsachLe *tiep;
};
void nhapDS(danhsach **p){
	int so;
	danhsach *d,*tg;	
	d=NULL;
	do{
		fflush(stdin);
		printf("\n0/de dung lai");
		
		printf("\nMoi Nhap so: ");
		scanf("%d",&so);
		if(so!=0){
			*p=(danhsach*)malloc(sizeof(danhsach));
			(**p).so=so;
			(**p).tiep=NULL;
			if(d==NULL)
				d=*p;
			else
				tg->tiep=*p;
			tg=*p;
		}
		else if(so < 0|| so > 1)
			printf("Ban nhap sai lChon ! ");
	}while(so!=0);
	*p=d;
}
void inDS(danhsach *p){
	while(p!=NULL){
		printf(" %d ",p->so);
		p=p->tiep;
	}
}
void inDSChan(danhsachChan *p){
	while(p!=NULL){
		printf(" %d ",p->so);
		p=p->tiep;
	}
}
void inDSLe(danhsachLe *p){
	while(p!=NULL){
		printf(" %d ",p->so);
		p=p->tiep;
	}
}
void sapXep(danhsach **d){
	danhsach *tg,*p,*p2;
	p=*d;
	p2=p->tiep;
	while(p!=NULL){
		for(p2=p->tiep;p2 != NULL;p2=p2->tiep){
			if(p->so > p2->so){
				int temp=p->so;
				p->so=p2->so;	
				p2->so=temp;
			}
		}
		p=p->tiep;
	}
}
danhsach *chenDSLK(danhsach *d,int x){
	danhsach *p,*tg,*q;
	p=(danhsach*)malloc(sizeof(danhsach));
	p->so=x;
	p->tiep=NULL;
	if(d->so >=x){
		p->tiep=d;
		d=p;
	}
	else{
		q=d;
		while(q!=NULL && q->so <=x){
			tg=q;
			q=q->tiep;
		}
		tg->tiep=p;
		p->tiep=q;
	}
	return d;
}
//void timSoNT(danhsach *p){
//	int i;
//	while(p!=NULL){
//		for(i=1;i<=sqrt(p->so);i++){
//			if()
//		}
//	}
//}

void lietKe(danhsach **d,danhsachChan **chan,danhsachLe **le){
	danhsachChan *dChan,*tgChan;
	danhsachLe *dLe,*tgLe;
	dChan=NULL;
	dLe=NULL;
	while((*d)!=NULL){
		if((**d).so %2 == 0){
			*chan=(danhsachChan*)malloc(sizeof(danhsachChan));
			(**chan).so=(**d).so;
			(**chan).tiep=NULL;
			if(dChan==NULL)
				dChan=*chan;
			else
				tgChan->tiep=*chan;
			tgChan=*chan;
		}
		else{
			*le=(danhsachLe*)malloc(sizeof(danhsachLe));
			(**le).so=(**d).so;
			(**le).tiep=NULL;
			if(dLe==NULL)
				dLe=*le;
			else
				tgLe->tiep=(*le);
			tgLe=*le;
		}
		*d=(**d).tiep;
	}
}
main(){
	int n;
	danhsach *p;
	danhsachChan *pChan;
	danhsachLe *pLe;
	nhapDS(&p);
	sapXep(&p);
	inDS(p);
	lietKe(&p,&pChan,&pLe);
	printf("day so chan: ");
	inDSChan(pChan);
	printf("\nday so le : ");
	inDSLe(pLe);
//	printf("\nChen so !! ");
//	printf("\nMoi nhap so can chen : ");
//	scanf("%d",&n);
//	p=chenDSLK(p,n);
//	inDS(p);
}
