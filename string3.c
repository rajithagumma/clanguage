#include <stdio.h>
#include <string.h>
int main(){
	char str[20];
	scanf("%s",str);
	int v=strlen(str);
	int r=sizeof(str);
	printf("%d%d",v,r);
	return 0;
	}
