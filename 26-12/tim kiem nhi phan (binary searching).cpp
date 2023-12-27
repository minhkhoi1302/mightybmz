#include <stdio.h>
int main(){
	
	int data[]= {6,13,14,25,33,43,51,53,64,72,84,93,95,96,97};
	int low =0;
	int high=14;
	int searchvalue = 33;
	int flag=0;
	
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(searchvalue == data[mid])
		{
			flag =1;
			printf("found at index %d\n",mid);
			break;
		}else if(searchvalue<data[mid]){
			high = mid -1;
		}else if(searchvalue>data[mid]){
			low= mid +1;
		}
	}
	if(flag ==0){
		printf("element not found");
	}
}
