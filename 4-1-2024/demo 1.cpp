#include <stdio.h>
typedef struct Classroom{
	char name[20];
	char room[10];
}Classroom;

typedef struct Student{
	char name[50];
	int writemark;
	int pracmark;
	int asmMark;
	Classroom myClass;
}Student;

int main(){
	int x;
	struct Student sv;
	printf("nhap ten sinh vien: ");
	scanf("%s",sv.name);
	printf("nhap diem ly thuyet: ");
	scanf("%d",&sv.writemark);
	printf("nhap diem thuc hanh: ");
	scanf("%d",&sv.pracmark);
	printf("nhap diem qua trinh: ");
	scanf("%d",&sv.asmMark);
	printf("nhap lop hoc cua sinh vien: ");
	scanf("%s",&sv.myClass.name);
	
	Student t2311e[20];
	for(int i=0;i<20;i++){
		printf("nhap ten sinh vien: ");
		scanf("%s",t2311e[i].name);
		printf("nhap diem ly thuyet: ");
		scanf("%d",&t2311e[i].writemark);
		printf("nhap diem thuc hanh: ");
		scanf("%d",&t2311e[i].pracmark);
		printf("nhap diem qua trinh: ");
		scanf("%d",&t2311e[i].asmMark);
	}
	
	
}
