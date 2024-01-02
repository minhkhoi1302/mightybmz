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
	
	int thangmay=0;
	int kyluc=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			thangmay++;
			if(thangmay>kyluc){
				
			}
		}else{
			thangmay=0;
		}
	}
	printf("day so duong dai nhat la: %d",kyluc);
}
