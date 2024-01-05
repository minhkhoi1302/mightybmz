#include <stdio.h>
int main(){
	
	int n;
	printf("length of array:");
	scanf("%d",&n);
	int arr[n];
	
	printf("enter numbers: \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	int sc=0;
	for(int i=n-1;i>=0;i--){
		if(arr[i] %2 == 0){
			sc=arr[i];
			break;
		}
	}
	printf("last even: %d\n",sc);
}
