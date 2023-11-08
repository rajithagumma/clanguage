#include <stdio.h>
struct employee{
	int employeeid;
	char name[50];
	char department[50];
	float salary;
};
void inputEmployeeDetails(struct employee *e) {
	 printf("enter employeeid,name,department,salary\n");
	 scanf("%d %s %s %f",&(e->employeeid),e->name,e->department,&(e->salary));
}
void printEmployeeDetails(struct employee e){
	 printf("%d %s %s %0.2f",e.employeeid,e.name,e.department,e.salary);
}
int main(){
	int n;
	printf("enter number of employees");
	scanf("%d",&n);
	struct employee e1[n];
	for (int i=0;i<n;i++){
		printf("enter   details of employee%d\n",i+1);
		inputEmployeeDetails(&e1[i]);
	}
	for (int i=0;i<n;i++){
		printf("printing details of employess5%d\n",i+1);
		printEmployeeDetails(e1[i]);
	}
	return 0;
}
