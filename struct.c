#include <stdio.h>
struct student{
	int rollno;
	char name[10];
	float marks;
}s2;
int main(){
	struct student s1;
	struct student *p=&s1;
	printf("%lu",sizeof(s1));
	scanf("%d %s %f",&s1.rollno,s1.name,&s1.marks);
	printf("%d %s %f",p->rollno,p->name,p->marks);
	return 0;
}
