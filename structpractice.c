#include <stdio.h>
#pragma pack(1)
struct store{
	double price;
	union{
	     struct{
         	char author[10];
         	char name[10];
         	int numberofpages;
         }book;
         struct {
         char color[10];
         char design[10];
         char size;
         }shirt;
	}item;
}
int main(){
	struct store s;
	s.item.book.author="rajitha";
	s.item.book.name="history";
	s.item.book.numberofpages=20;
	s.price=700;
	printf("%s %s %d %lf",s.item.book.author,s.item.book.name,s.item.book.numberofpages,s.price);
	return 0;
}
