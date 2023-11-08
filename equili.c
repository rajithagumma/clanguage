#include <stdio.h>
int main(){
	int i,n,left,sum,right;
	scanf("%d",&n);
	int a[n];
	sum=0;
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	left=0;
	i=0;
	while (i<n){
		right=sum-a[i]-left;
		if (left==right){
			printf("yes");
			break;
		}
		left+=a[i];
		i=i+1;
   }
   return 0;
}
