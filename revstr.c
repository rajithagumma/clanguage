#include <stdio.h>

void revstr(char s[]){
	int i,n;
	char temp;
	i=0;
	n=0;
	while (s[i]!='\0'){
		n=n+1;
		i=i+1;
	}
	for (int j=0;j<n/2;j++){
		temp=s[j];
		s[j]=s[n-j-1];
		s[n-j-1]=temp;
	}

}
int main(){
	char s[100];
	scanf("%s",s);
	revstr(s);
	printf("%s",s);
}

