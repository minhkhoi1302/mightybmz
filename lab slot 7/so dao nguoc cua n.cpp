#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int a = 0;
	while (n>0){
		a = n%10;
		n = n/10 ;
	    printf("%d",a);
	}
	
}
