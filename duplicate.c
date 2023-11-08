#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[j]==a[i]){
                        	for (int k=j;k<n-1;k++){
                        		a[k]=a[k+1];
                        	}
                        	n=n-1;
                        }
		}
	}
	for (int m=0;m<n;m++){
		printf("%d",a[m]);
	}
	return 0;
}
