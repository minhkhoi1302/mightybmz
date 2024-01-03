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
	
	int min = 0;
	int max = n-1;
	for(int i=0;i<n;i++){
		if(min<max){
			int temp = arr[min];
			arr[min]=arr[max];
			arr[max]= temp;
			min++;
			max--;
		}
	}
	printf("mang so dao nguoc:");
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	
	}

