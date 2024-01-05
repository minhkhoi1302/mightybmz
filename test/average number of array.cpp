#include <stdio.h>

float average(int s[], int n) {
    int total= 0, m=0;

    for(int i=0;i<n;i++)
    	total+=s[i],m++;
	return m ? (float)total / m : 0;
}

int main(){
	
	int s;
	printf("length of array:");
	scanf("%d",&s);
	
	int numbers[s];
	printf("enter numbers: \n");
	for(int i=0;i<s;i++){
		printf("arr[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	
	printf("average number of array: %f", average(numbers,s));
	return 0;
	
	
}
