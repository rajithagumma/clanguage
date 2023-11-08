#include <stdio.h>
#include <stdlib.h>
void revstr(char* s){
	char temp;
	int v,n;
	n=0;
	while ((*(s+n))!='\0'){
		n=n+1;
	}
	v=n-1;
	for (int j=0;j<n/2;j++){
		temp=*(s+j);
		*(s+j)=*(s+v-j);
		*(s+v-j)=temp;
	}

}
int main(){
	char* s = (char * )malloc(sizeof(char));
	scanf("%s",s);
	revstr(s);
	printf("%s",s);
	return 0;
}

