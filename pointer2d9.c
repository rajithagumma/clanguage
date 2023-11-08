#include <stdio.h>
#include <stdlib.h>
int maxlen(char** str1,int n){
	int max=0;
	for (int i=0;i<n;i++){
		int c1=0;
		while (str1[i][c1]!='\0'){
			c1=c1+1;
		}
		if (c1>max){
			max=c1;
		}
	}
	return max;
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
	int res=maxlen(str1,n);	
	printf("%d",res);
	for (int i=0;i<n;i++){
		free(str1[i]);
	}
	free(str1);
	return 0;
}
