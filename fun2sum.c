#include <stdio.h>
int sum( int n,int a[n]);
void main(){
	int n,sum2;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sum2=sum(n,a);
	printf("%d",sum2);
}
int sum(int n,int a[n]){
	int sum1;
	for (int j=0;j<n;j++){
		sum1=sum1+a[j];
	}
	return sum1;
}
