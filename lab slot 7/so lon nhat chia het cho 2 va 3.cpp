#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	while (n>=0){
		n--;
		if (n % 2 == 0 &&  n %3 == 0){
			printf("so lon nhat nho hon n chia het cho 2 va 3 la: %d\n",n);
			break;
		}
			
	}
	
	
}
