#include <stdio.h>
void leaders(int arr[],int n)
{
	int res;
	for (int i=0;i<n;i++){
	    res=1;
		for (int j=i+1;j<n;j++){
			if (arr[i]<arr[j]){
				res=0;
				break;
			}
		}
		if (res==1){
		     printf("%d ",arr[i]);
	    }
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
