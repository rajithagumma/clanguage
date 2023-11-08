#include <stdio.h>
void sortzrray(int arr[],int n){
	int i,j,k,temp1,temp2;
	i=0;
	j=0;
	k=0;
	while (i<n){
		if (arr[i]==0){
			temp1=arr[i];
			arr[i]=arr[j];
			arr[j]=temp1;
			j=j+1;
		}
		if (j>k){
			k=j;
		}
		if (arr[i]==1){
			temp2=arr[i];
			arr[i]=arr[k];
			arr[k]=temp2;
			k=k+1;
		}
		i=i+1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sortzrray(arr,n);
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
