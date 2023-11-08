#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* link;
};
void add_node(struct node* head,int v){
	struct node* ptr
	temp=malloc(sizeof(struct node));
	struct node* temp;
	ptr=head;
	while (ptr->link!=NULL){
		ptr=ptr->link;
	}
	temp->data=v;
	ptr->link=temp;
	printf("%d",temp->data);
}
int main(){
	struct node* head=malloc(sizeof(struct node));
	head->data=20;
	head->link=NULL;
	struct node* current=malloc(sizeof(struct node));
	current->data=35;
	current->link=NULL;
	head->link=current;
	current=malloc(sizeof(sizeof(struct node));
	current->data=45;
	current->link=NULL;
	head->link->link=current;
	add_node(head,v);
	return 0;
	
}
