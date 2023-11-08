#include <stdio.h>
int main(){	
	int n,m,max,min,maxdiff,diff;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	max=0;
	maxdiff=0;
	diff=0;
	min=10000000;
	for (int i=0;i<n;i++){
		max=0;
		min=10000000;
		for (int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
			if (arr[i][j]>=max){
				max=arr[i][j];
			}
			else if (arr[i][j]<=min){
				min=arr[i][j];
			}
		}
		diff=max-min;
		if (diff>maxdiff){
		maxdiff=diff;
		}
	}
	printf("%d",maxdiff);
	
}
