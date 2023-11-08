#include <stdio.h>
#include <stdlib.h>
void reverse(int* arr,int n){
	int i,temp,v;
	i=0;
	while (i<n/2){
	        v=n-1;
		temp=*(arr+i);
		*(arr+i)=*(arr+v-i);
		*(arr+v-i)=temp;
		i=i+1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int *arr = (int *)malloc(n * sizeof(int));
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
	
}


