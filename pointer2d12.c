#include <stdio.h>
#include <stdlib.h>
char* concatinate(char** str1,int n){
	int length=0;
	for (int i=0;i<n;i++){
	   int c1=0;
		while (str1[i][c1]!='\0'){
			c1=c1+1;
		}
		length=length+c1;
	}
	char* str2=(char*)malloc((length+1) * sizeof(char));
	int count=0;
	for (int i=0;i<n;i++){
		int c2=0;
		while (str1[i][c2]!='\0'){
		    str2[count]=str1[i][c2];
			c2=c2+1;
			count=count+1;
		}
	}
	return str2;
}

int main(){
	int n;
	printf("enter number of strings");
	scanf("%d",&n);
	char** str1=(char**)malloc(n * sizeof(char*));
	for (int i=0;i<n;i++){
		char string[1000];
		scanf("%s",string);
		getchar();
		int c=0;
		while (string[c]!='\0'){
			c=c+1;
		}
		str1[i]=(char*)malloc(c * sizeof(char));
		for (int j=0;j<c;j++){
			str1[i][j]=string[j];
		}
		
	}
	char* res=concatinate(str1,n);
	printf("%s",res);
	
	for (int i=0;i<n;i++){
		free(str1[i]);
	}
	free(str1);
	free(res);
	return 0;
}
