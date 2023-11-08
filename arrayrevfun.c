#include <stdio.h>
void reverse(int arr[],int n){
	int i,temp;
	i=0;
	while (i<n/2){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
		i++;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
	    printf("enetr the elements");
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	for (int j=0;j<n;j++){
		printf("%d",arr[j]);
	}
	return 0;
	
}

