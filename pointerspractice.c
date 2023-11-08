#include <stdio.h>
void  pointer(int* a,int b){
    int t;
    t=a[0];
	a[0]=a[1];	
	a[1]=t;
	
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	pointer(a,n);
	for (int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	return 0;
}
