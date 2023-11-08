#include <stdio.h>
#include <stdlib.h>
int frequency(char* s,char c){
	int n,fre;
	n=0;
	fre=0;
	while ((*(s+n))!='\0'){
		if (c==(*(s+n))){
			fre=fre+1;
	    }
	    n=n+1;
	}
	return fre;
}
int main(){
	int freq;
	char c;
	char* p=&c;
	

	//printf("enter the character");
	char* s = (char*)malloc(sizeof(char));
	printf("enter the string");
	scanf("%s",s);
	getchar();
	scanf("%c",&c);
	getchar();
	freq=frequency(s,c);
	printf("%d",freq);
        return 0;
}
