#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
};
int main(){
	struct student s;
	printf("enter name");
	scanf("%s",s.name);
	printf("enter roll");
	scanf("%d",&s.roll);
	printf("enter marks");
	scanf("%f",&s.marks);
	printf("Name:%s,roll:%d,marks:%.1f",s.name,s.roll,s.marks);
	return 0;
}
