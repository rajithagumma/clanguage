#include <stdio.h>
int main(){
	int a[]={2,4,6,8};
	for (int i=0;i<4;i++){
	printf("%llu\n",(long long unsigned int)(&(a[i])));
	printf("%llu\n",(long long unsigned int)(a+i));
	printf("%llu\n",(long long unsigned int)(a[i]));
	printf("%llu\n",(long long unsigned int)(*(a+i)));
	}
	return 0;
}
