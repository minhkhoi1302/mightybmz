#include <stdio.h>

int main(){
	int n ;
	printf("nhap so trong khoang tu 1-100:");
	scanf("%d",&n);
	while (n<1 || n>100){
		printf("chua nhap dung de nghi nhap lai\n");
		scanf("%d",&n);
	}
	printf("nhap dung");


}
