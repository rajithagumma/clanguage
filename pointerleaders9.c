#include <stdio.h>
#include <stdlib.h>
void leaders(int* arr,int n)
{
	int leader,j;
	leader=*(arr+n-1);
	printf("%d\n",leader);
	j=n-2;
	while (j>=0){
		if ((*(arr+j))>leader){
			printf("%d\n",*(arr+j));
			leader=*(arr+j);
		}
		j=j-1;
	}
}
int main()
{
 	int n;
 	scanf("%d",&n);
 	int arr[n];
 	for (int i=0;i<n;i++){
 		scanf("%d",&arr[i]);
 	}
 	leaders(arr,n);
 	return 0;
}
