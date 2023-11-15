#include<stdio.h>
int main(){
	float goc,laixuat,laihangthang,lai;
	int n,time;
	lai = 0;
	printf("nhap so tien goc(don vi trVND) ");
	scanf("%f",&goc);
	printf("\nnhap lai xuat tren 1 thang ");
	scanf("%f",&laixuat);
	printf("\nnhap so thang gui ");
	scanf("%d",&time);
	n=1;
	for (;n<=time;n++){
		laihangthang = goc * laixuat;
		lai += laihangthang;
		goc += laihangthang;
	}
	printf("so tien lai la: %f trVND",lai);
	printf("\nso tien nhan duoc la: %f trVND",goc);
}
