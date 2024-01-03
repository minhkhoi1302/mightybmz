#include <stdio.h>

int main(){
	int n ;
	printf("nhap n:");
	scanf("%d",&n);
	for(int i = 2 ;i <= n;i++){
		if (n % i == 0 ){
			if (i == n){
			    printf("n la so nguyen to");
			}else{
				printf("n khong phai la so nguyen to");
				break;
			}
		}
	}
}
