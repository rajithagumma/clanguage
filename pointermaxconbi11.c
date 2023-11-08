#include <stdio.h>
#include <stdlib.h>
int maxcons(int* arr,int n){
	int c,max,j,i;
	i=0;
	c=0;
	while  (i<n){
		if ((*(arr+i))==0){
			c=0;
		}
		else if ((*(arr+i))==1){
			c=c+1;
		}
		if (c>max){
			max=c;
		}
		i=i+1;
	}
	
	return max;
	
}
int main(){
	int n,res;
	scanf("%d",&n);
	int* arr=(int *)malloc(n * sizeof(int));
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	res=maxcons(arr,n);
	printf("%d",res);
	return 0;
}


