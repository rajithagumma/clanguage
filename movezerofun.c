#include <stdio.h>
void movezeros(int arr[],int n){
	int i,j,temp;
	j=0;
	for (i=0;i<n;i++){
		if (arr[i]!=0){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j=j+1;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	movezeros(arr,n);
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
}
