#include <stdio.h>
#include <stdlib.h>
int maxcons(char* s){
	int c,max,j,i,n,k;
	n=0;
	k=0;
	while ((*(s+k))!='\0'){
		n=n+1;
		k=k+1;
	}
	max=0;
	i=0;
	c=0;
	while  (i<n){
		if ((*(s+i))=='0'){
			c=0;
		}
		else if ((*(s+i))=='1'){
			c=c+1;
		}
		if (c>max){
			max=c;
		}
		i=i+1;
	}
	
	return max;
	
}
int main(){
	int res;
	char* s=(char *)malloc(sizeof(char));
	scanf("%s",s);
	getchar();
	res=maxcons(s);
	printf("%d",res);
	return 0;
}


