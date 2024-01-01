#include <stdio.h>
int main(){

	float CanNang, ChieuCao;
	printf("nhap can nang(kg)");
	scanf ("%f",&CanNang);
	printf("nhap chieu cao(m)");
	scanf ("%f",&ChieuCao);
	
	float BMI= CanNang/(ChieuCao*ChieuCao);
	
	printf("Chi so BMI la:%.2f\n",BMI);

	if (BMI<18.5){
		printf("tinh trang can nang: thieu can\n");
		
		}else if(BMI>=18.5&&BMI<24.9){
		printf("tinh trang can nang: binh thuong\n");
		
		}else if(BMI>=24.9&&BMI<=29.9){
		printf("tinh trang can nang: thua can\n");
		
		}else if(BMI>29.9){
		printf("tinh trang can nang: beo phi\n");
		}
		
	
	
	}
