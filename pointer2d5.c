#include <stdio.h>
#include <stdlib.h>
int** printmatrix(int n,int m){
	int ** arr=(int**)malloc(n * sizeof(int*));
	for (int i=0;i<n;i++){
		arr[i]=(int*)malloc(m*sizeof(int));
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	return arr;
}
int main(){
	int n,m;
	printf("enter number of rows");
	scanf("%d",&n);
	printf("enter number of columns");
	scanf("%d",&m);
	int** arr1=printmatrix(n,m);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf("%d",arr1[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<n;i++){
		free(arr1[i]);
	}
	free(arr1);
	return 0;
}

