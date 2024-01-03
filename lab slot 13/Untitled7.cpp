#include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc mang:");
	scanf("%d",&n);
	int arr[n];
	
	printf("nhap gia tri cho mang: \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	
}
