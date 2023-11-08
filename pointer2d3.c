#include <stdio.h>
#include <stdlib.h>
int symmetric(int** arr,int n,int m){
	int res1=1;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if ((*(*(arr+i)+j))!=(*(*(arr+j)+i))){
				res1=0;
				break;
			}
	    }
	}
	return res1;
}
int main(){
	int n,m,res;
	printf("enter number of rows in array:");
	scanf("%d",&n);
	printf("enter number of columns in array");
	scanf("%d",&m);
	int** arr=(int**)malloc(n * sizeof(int *));
	for (int i=0;i<n;i++){
		 arr[i]=(int*)malloc(m * sizeof(int));
	}
	for (int i=0;i<n;i++){
		printf("enter the elements in %d",i+1);
		for (int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}		
    }
	res=symmetric(arr,n,m);
	if (res==1){
		printf("yes it is a symmetric matrix\n");
	}
	else{
		printf("no it is not symmetric\n");
	}
	for (int i=0;i<n;i++){
		free(arr[i]);
	}
	free(arr);
	return 0;
}
