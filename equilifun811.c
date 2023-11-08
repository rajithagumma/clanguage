#include <stdio.h>
int equi(int arr[],int n){
 	int sum,left,right,i,c;
	for (int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	left=0;
	right=0;
	res=0;
	i=0;
	while (i<n){
		right=sum-arr[i]-left;
		if (right==left){
			c=c+1;
		}
		left=left+arr[i];
		i=i+1;
	}
	return c;
}
int main(){
	int n,result;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	result=equi(arr,n);
	printf("%d",result);
	return 0;
}
