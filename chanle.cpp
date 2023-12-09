#include <stdio.h>

int main(){
	
	int num;
	scanf("%d",&num);
	
	int r = num % 2;
	
	if(r == 0){
		// yes
		printf("num la so chan");
	}else{
		// no
		printf("num la so le");

	}
}
