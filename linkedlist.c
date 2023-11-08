#include <stdio.h>
#include <stdlib.h> 
struct node {
	int a;
	char b;
	struct node *link1;
};
int main(){
	struct node a;
	struct node *head;
	printf("%lu",sizeof(a.link1));
	printf("%lu",sizeof(a));
	return 0;
}
