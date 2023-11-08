#include <stdio.h>
struct student{
	char name[100];
	int rollno;
	int age;
	char grade;
};
void inputStudentDetails(struct student *s){
    printf("enter name,roll no,age and grade");
	scanf("%s %d %d %c",s->name,&(s->rollno),&(s->age),&(s->grade));
}
 void printStudentDetails(struct student s){
	printf("%s\n%d\n%d\n%c\n",s.name,s.rollno,s.age,s.grade);
 }
 int main(){
 	int n;
 	printf("enter the number of students");
 	scanf("%d",&n);
 	struct student stu[n];
 	for (int i=0;i<n;i++){
 		printf("entering  details of student%d\n",i+1);
 		inputStudentDetails(&stu[i]);
 	}
 	for (int i=0;i<n;i++){
 		printf("printing details of student%d\n",i+1);
 		printStudentDetails(stu[i]);
 	}
 	return 0;
 	
 }
