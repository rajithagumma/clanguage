#include <stdio.h>
int main(){
	int t,a,b;
	while (t<=40320){
		scanf("%d %d",&a,&b);
		if (a!=7 || b!=9){
		        printf("something wrong a=%d ,b=%d",a,b);
			break;
		t=t+1;}
	}
	return 0;
  }
