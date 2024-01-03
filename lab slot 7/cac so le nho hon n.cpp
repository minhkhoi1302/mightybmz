#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	
	while (n>0){
		n--;
		if (n % 2 != 0){
			printf("so le nho hon n la %d\n",n);	
		}
		
	}
		
}
