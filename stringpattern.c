#include <stdio.h>
int stringpat(char string[],char pat[]){
	int len1,len2,i,j,c;
	len1=0;
	len2=0;
	while (string[len1]!='\0'){
		len1=len1+1;
	}
	while (pat[len2]!='\0'){
		len2=len2+1;
	}
	i=0;
	j=0;
	c=0;
	while (j<len1){
	    if (c==len2){
	    	break;
	    }
		if (string[j]==pat[i]){
			c=c+1;
			i=i+1;
		}
		else{
			c=0;
		}
		j=j+1;
		printf("%d\n",c);
	}
	if (c==len2){
		return 1;
	}
	else{
		return 0;
	}
	   
}
int main(){
	int res;
	char string[1000];
	char pat[1000];
	scanf("%s",string);
	getchar();
	scanf("%s",pat);
	getchar();
	res=stringpat(string,pat);
	if (res==1){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	return 0;
}
