#include <stdio.h>
#include <stdlib.h>
int count(char** str1,int num,int n){
	int count2=0;
	for (int i=0;i<n;i++){
		int c1=0;
		while (str1[i][c1]!='\0'){
			c1=c1+1;
		}
		if (c1>num){
			count2=count2+1;
		}
	}
	return count2;
}
int main(){
	int n,num;
	printf("enter the threshold num");
	scanf("%d",&num);
	printf("enter number of strings");
	scanf("%d",&n);
	char** str1=(char**)malloc(n * sizeof(char*));
	for (int i=0;i<n;i++){
		char string[1000];
		scanf("%s",string);
		getchar();
		str1[i]=string;
		
	}
	int count1=count(str1,num,n);
	printf("count is %d",count1);
	free(str1);
	return 0;
}
