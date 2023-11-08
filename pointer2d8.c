#include <stdio.h>
#include <stdlib.h>
int** sumtwoarr(int** arr1,int** arr2,int n,int m){
	int** arr3=(int**)malloc(n * sizeof(int*));
	for (int i=0;i<n;i++){
		arr3[i]=(int*)malloc(m * sizeof(int));
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			arr3[i][j]=(arr1[i][j]+arr2[i][j]);
		}
	}
	return arr3;
		
}
int main(){
	int n,m;
	printf("enter number of rows");
	scanf("%d",&n);
	printf("enter number of columns");
	scanf("%d",&m);
	int** arr1=(int**)malloc(n * sizeof(int*));
	for (int i=0;i<n;i++){
		arr1[i]=(int*)malloc(m * sizeof(int));
	}
	printf("enter the elements in 2nd  array");
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
		 	scanf("%d",&arr1[i][j]);
		}
	}
	int** arr2=(int**)malloc(n * sizeof(int*));
	for (int i=0;i<n;i++){
		arr2[i]=(int*)malloc(m * sizeof(int));
	}
	printf("enter the elements in 1 st array");
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
		 	scanf("%d",&arr2[i][j]);
		}
	}
	int** res=sumtwoarr(arr1,arr2,n,m);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf("%d",res[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<n;i++){
		free(arr1[i]);
	}
	free(arr1);
	for (int i=0;i<n;i++){
		free(arr2[i]);
	}
	free(arr2);
	for (int i=0;i<n;i++){
		free(res[i]);
	}
	free(res);
	return 0;
}
