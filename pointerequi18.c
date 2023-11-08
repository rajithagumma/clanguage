#include <stdio.h>
#include <stdlib.h>
int equi(int* arr,int n){
 	int sum,left,right,res,i;
 	sum=0;
	for (int i=0;i<n;i++){
		sum=sum+(*(arr+i));
	}
	left=0;
	right=0;
	res=0;
	i=0;
	while (i<n){
		right=sum-(*(arr+i))-left;
		if (right==left){
			res=1;
			break;
		}
		left=left+(*(arr+i));
		i=i+1;
	}
	return res;
}
int main(){
	int n,result;
	scanf("%d",&n);
	int* arr=(int *)malloc(n * sizeof(int));
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	result=equi(arr,n);
	if (result==1){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	return 0;
}


