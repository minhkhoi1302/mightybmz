#include <stdio.h>

int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int s=0;
	for(int i = 1 ;i <= n;i++){
	      if (n%i == 0) {
	      	if (i == n and s==n ){
	      		printf("no la so hoan hao");
	      		break;
			}else if (i == n and s!= n ){
				printf("no khong hoan hao");
	      		break;
			}
			s = i + s;
		  }
	}
}
