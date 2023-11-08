#include <stdio.h>

int main(void) {
	// your code goes here
	long long int t;
	scanf("%lld",&t);
	for (int i=0;i<t;i++){
	    long long  int n,m,sum,l;
	    scanf("%lld%lld",&n,&m);
	    long long int arr[n];
	    for (int i=0;i<m;i++){
	        scanf("%lld",&arr[i]);
	    }
	    sum=0;
	    long long int arr1[m];
	    for (int j=0;j<n;j++){
	        scanf("%lld",&arr1[j]);
	    }
	    for (int k=0;k<n;k++){
	      int  result=0;
	       for (int e=0;e<m;e++){
	       		if (arr1[k]==arr[e]){
	       			result=1;
	       			break;
	       		}
	       }
	       if (result==0){
	       		sum=sum+arr1[k];
	       }
	        }
	    printf("%lld\n",sum);
	}
	return 0;
}


