#include <stdio.h>
void reverse(int arr[],int n){
	int i,temp;
	i=0;
	while (i<n/2){
		temp=arr[i];
		arr[i]=arr[n-j-1];
		arr[n-j-1]=temp;
	}
}
int main(){
	int n,res;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	reverse(a,n);
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
	
}

