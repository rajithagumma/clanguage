#include <stdio.h>
#include <stdlib.h>
void revstr(char* s,int n){
	char temp;
	int v;
	v=n-1;
	for (int j=0;j<n/2;j++){
		temp=*(s+j);
		*(s+j)=*(s+v-j);
		*(s+v-j)=temp;
	}

}
int main(){
	int n;
	scanf("%d",&n);
	char* s = (char*)malloc((n+1) * sizeof(char));
	scanf("%s",s);
	revstr(s,n);
	printf("%s",s);
	return 0;
}

