#include <stdio.h>
int main(){
	int n,i,j,k,temp;
	scanf("%d",&n);
	int a[n];
	for (int l=0;l<n;l++){
		scanf("%d",&a[l]);
	}
	i=0;
	j=0;
	k=0;
	while (i<n){
		if (a[i]==0){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			j=j+1;
		}
		if (j>k){
			j=k;
		}
		if (a[i]==1){
		    temp=a[i];
			a[i]=a[k];
			a[k]=temp;
			k=k+1;
		}
		i=i+1;
		
	}
	for (int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
