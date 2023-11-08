#include <stdio.h>
int sorted(int arr[],int n){
    int res;
    res=1;
	for (int j=0;j<n-1;j++){
		if (arr[j]>arr[j+1]){
			res=0;
			break;
		}
	}
	return res;
}
int main(){
	int n,result;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	result=sorted(arr,n);
	if (result==1){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
}
