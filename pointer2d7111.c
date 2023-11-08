#include <stdio.h>
#include <stdlib.h>
int* sum(int** arr,n,m){
	int * arr1=(int*)malloc(n * sizeof(int));
	for (int i=0;i<n;i++){
		int sum=0;
		for (int j=0;j<m;j++){
			sum=sum+arr[i][j];
		}
		arr1[i]=sum;
	}
	return arr1;
}
int main(){
	int n,m;
	printf("enter the number of rows");
	scanf("%d",&n);
	printf("enter number of columns");
	scanf("%d",&m);
	int ** arr=(int**)malloc(n * sizeof(int*));
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			arr[i]=(int*)malloc(m * sizeof(int));
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int *res=sum(arr,n,m);
	for (int i=0;i<n:i++){
		printf("%d",res[1]);
	}
	return 0;
}
