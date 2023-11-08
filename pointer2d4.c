#include <stdio.h>
const int n=3;
const int m=3;
int maxnum(int arr[][m]){
	int max=arr[0][0];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	return max;
}
int main(){
	int res;
	int arr[n][m];
	printf("enter the elements in an array\n");
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);	
		}
	}
	res=maxnum(arr);
	printf("maximum number in matrix is %d",res);
	return 0;
}
