#include <stdio.h>
#include <stdlib.h>
int string1(char** str1,char s[100],int n){
	int res1=0,c1,c2;
	int v=0;
	while (s[v]!='\0'){
		printf("%c\n",s[v]);
		v=v+1;
	}
	for (int i=0;i<n;i++){
		c1=0;
	    while (str1[i][c1]!='\0'){
	    	c1=c1+1;
	    }
	    if (c1==v){
	    	c2=0;
	    	while (str1[i][c2]!='\0'){
	    		if (s[c2]!=str1[i][c2]){
	    			break;
	    		}
	    		c2=c2+1;
	    	}
	    }
	    	if (c2==v){
	    		res1=1;
	    		break;
	    	}
	  }
	return res1;
}
int main(){
	char s[1000];
	printf("enter the string for searching");
	scanf("%s",s);
	getchar();
	int n;
	printf("enter number of strings");
	scanf("%d",&n);
	char** str1=(char**)malloc(n * sizeof(char*));
	for (int i=0;i<n;i++){
		char string[1000];
		scanf("%s",string);
		getchar();
		int len1=0;
		while (s[len1]!='\0'){
			len1=len1+1;
		}
		str1[i] = (char *)malloc((len1 + 1) * sizeof(char));
		str1[i]=string;
	}
	int res=string1(str1,s,n);
	if (res==1){
		printf("present\n");
	}
	else{
		printf("not present\n");
	}
	free(str1);
	return 0;
}

