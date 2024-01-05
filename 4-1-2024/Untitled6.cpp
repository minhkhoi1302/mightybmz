#include <stdio.h>
#include <string.h>

typedef struct Student{
	char name[50];
	int mark;
}Student;

int main(){
	
	Student sv[20];
	for(int i=0;i<20;i++){
		printf("nhap ten sinh vien: ");
		scanf("%s",sv[i].name);
		printf("nhap diem : ");
		scanf("%d",&sv[i].mark);
	}




}
