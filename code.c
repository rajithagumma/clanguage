#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
	    int n,k;
	    long long arr[n];
	    for (int j=0;j<n;j++){
	        scanf("%lld",&arr[i]);
	    }
	    long long temp;
	    temp=arr[0];
	    arr[0]=arr[n-1];
	    arr[n-1]=temp;
	    for (int k=0;k<n;k++){
	        printf("%lld",arr[k]);
	    }
	}
	return 0;
}
