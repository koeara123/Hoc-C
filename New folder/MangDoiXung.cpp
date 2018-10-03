#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define MAX 100
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
int KiemTraMangDoiXung(int a[], int n);
int tangDan(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(i==n)
			break;
		else if(a[i]>=a[i+1])
			return -1;
	}
	return 1;
}
main()
{
	int a[MAX],n;
	nhapmang(a,n);
	printf("\nNoi dung cua mang");
	xuatmang(a,n);
	if(KiemTraMangDoiXung(a,n) == 1)
		printf("\nMang doi xung ");
	else
		printf("\nMang khong doi xung ");
		
	if(tangDan(a,n)==1){
			printf("\n la mang tang dan");
			
	}
	
	else
		printf("\nKhong phai la mang tang dan");
	printf("\nChuc cac ban hoc tot");
	getch();
}
void nhapmang(int a[], int &n)
{
	do
	{
		printf("\nSo phan tu trong mang ");
		scanf("%d",&n);
	}while(n<=0 && n>100);
	for(int i=0 ; i<n ; i++ )
	{
		printf("\nSo phan tu a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[], int n)
{
	for(int i=0 ; i<n ; i++ )
		printf("%4d",a[i]);
}
int KiemTraMangDoiXung(int a[], int n)
{
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			return -1;
			break;
		}
	}
	return 1;
}
