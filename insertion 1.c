#include <stdio.h>
int main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=1;
	while (i<n){
		temp=a[i];
		j=i-1;
		while (j>=0){
			if (a[j]>temp){
			   a[j]=temp;
			}
			else{
				a[j]=temp;
				break;
			}
		
		j=j-1;
		}
	i=i+1;
	}
	return 0;
	}
}
