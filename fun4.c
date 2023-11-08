#include <stdio.h>
int sumarr(int arr[],int n);
int main(){
	int n,sum1;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sum1=sumarr(a,n);
	printf("%d",sum1);
	return 0;
}
int sumarr(int arr[],int n){
	int sum;
	for (int j=0;j<n;j++){
		sum=sum+arr[j];
	}
	return sum;
}

