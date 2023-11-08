#include <stdio.h>
int frequency(char s[],char c){
	int i,n,j,fre;
	i=0;
	n=0;
	while (s[i]!='\0'){
		n=n+1;
		i=i+1;
	}
	j=0;
	fre=0;
	while (j<n){
		if (c==s[j]){
			fre=fre+1;
		}
		j=j+1;
	}
	return fre;
}
int main(){
	char s[1000];
	char c;
	int freq;
	scanf("%c",&c);
	scanf("%s",s);
	freq=frequency(s,c);
	printf("%d",freq);
	return 0;
	
}
