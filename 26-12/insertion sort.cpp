#include <stdio.h>

int main(){
	
	int data[5]= {23,90,9,25,16};
	int tmp,i,j;
	//perform insertion sorting
	for (j=1;j<5;j++){
		i=j-1;
		tmp=data[j];
		while ( (i>=0) && (tmp<data[i])){
			data[i+1]= data[i];
			i--;
		}
		data[i+1]=tmp;
	}
	printf("mang: \n");
	for(int j=1;j<6;j++){
		printf("%d \t",data[j-1]);
	}
}
