#include <stdio.h>
#include <math.h>

int main(){

	int A;
printf("so thu 1:");
scanf("%d",&A);
int B;
printf("so thu 2:");
scanf("%d",&B);
int C;
printf("so thu 3:");
scanf("%d",&C);

int Max;
Max = A;

if(B+C>Max){
	printf("tam giac hop le\n");
int chu_vi= A+B+C;
 printf("Chu vi tam giac: %d\n", chu_vi);
 
float p= chu_vi / 2.0;
 float dien_tich = sqrt(p * (p - A) * (p - B) * (p - C));
printf("Dien tich tam giac: %f\n", dien_tich);
}else{printf("Tam giac khong hop le\n");
}

}

