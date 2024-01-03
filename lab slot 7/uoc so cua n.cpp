#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int a = n;
	while (n>0){
		
		if (a % n == 0){
			printf("uoc cua n la %d\n",n);		
		}
		n--;		
	}
		
}
