#include <stdio.h>
struct book{
	char title[50];
	char author[50];
	int yearofpublication;
	float price;
};
void inputBookDetails(struct book *b){
	 printf("enter title,author,yearof publication,price\n");
	 scanf("%s %s %d %f",b->title,b->author,&(b->yearofpublication),&(b->price));
}
void printBookDetails(struct book b){
		printf("%s\n%s\n%d\n%f\n",b.title,b.author,b.yearofpublication,b.price);	
}
int main(){
	int n;
	printf("enter number of books");
	scanf("%d",&n);
	struct book b1[n];
	for (int i=0;i<n;i++){
		printf("enter   details of book\n");
		inputBookDetails(&b1[i]);
	}
	for (int i=0;i<n;i++){
		printf("printing details of book\n");
		printBookDetails(b1[i]);
	}
	return 0;
}
