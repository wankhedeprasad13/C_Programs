#include<stdio.h>
struct student{
	int id;
	float marks;
	char name[100];
};

int main()
{
	struct student s1;
	printf("enter data of student such as id,name and marks");
	scanf("%d%f%c",&s1.id,&s1.marks,s1.name);
	printf("id,marks,name is %d,%f,%c",s1.id,s1.marks,s1.name);
	
	return 0;
}
