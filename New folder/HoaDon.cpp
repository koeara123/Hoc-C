#include<stdio.h>
#include<stdlib.h>
typedef struct HoaDon{
	int soHD,soluong,thanhtien;
};
int demHD (HoaDon HD[],HoaDon hd1,int n, int i){
	static int dem=0;
	if(i<=n){
		if(hd1.thanhtien>20)
		{
			dem++;
			demHD(HD,HD[++i],n,i);
		}
		else
			demHD(HD,HD[++i],n,i);
	}
	else
		return dem;
}
main(){
	int i,soHD,sl,tt;
	int n=1;
	HoaDon x[n];
	for(i=1;i<=n;i++){
		printf("Nhap soHD , so luong , thanh tien ");
		scanf("%d%d%d",&soHD,&sl,&tt);
		x[i].soHD=soHD;
		x[i].soluong=sl;
		x[i].thanhtien=tt;
		fflush(stdin);
	}
	
	printf("%d",demHD(x,x[1],n,1));


}
