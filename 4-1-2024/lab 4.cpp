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

	for(int i=0;i<20-1;i++){
		for(int j=0;j<20-i-1;j++){
			if(strcmp(sv[j].name,sv[j+1].name)>0){
				Student tmp;
				strcpy(tmp.name,sv[j].name);
				tmp.mark = sv[j].mark;
				strcpy(sv[j].name,sv[j+1].name);
				sv[j].mark = sv[j+1].mark;
				strcpy(sv[j+1].name,tmp.name);
				sv[j+1].mark = tmp.mark;
			}
		}
	}
	
	

}
