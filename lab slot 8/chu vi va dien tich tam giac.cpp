#include <stdio.h>
#include <math.h>

int main(){
	int a;
	int b;
	int c;
	printf("nhap so trong do dai 3 canh tam giac \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	while (a+b < c || c+b <a || a+c<b){
		printf("chua nhap dung de nghi nhap lai\n");
		scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
		
	}
	int cv = a+b+c;
	float nuacv = cv/2;
	float dt = sqrt(nuacv *(nuacv -a)*(nuacv-b)*(nuacv-c));
	printf("Chu vi la %d , Dien tich la %f ",cv,dt );
		

}
