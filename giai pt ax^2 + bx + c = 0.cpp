#include <stdio.h>
#include <math.h>

int main() {
   float a,b,c;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
   
   float delta = b*b - 4*a*c;
   if (delta>0){
   	float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);
    printf("phuong trinh co hai nghiem thuc phan biet:\n");
    printf("x1=%.2f",x1);
    printf("x2=%.2f",x2);
    }else if(delta=0){
	float x= (-b)/(2*a);
	printf("phuong trinh co nghiem kep:\n");
   }else{
   	printf("phuong trinh vo nghiem.\n");
   }
    }
