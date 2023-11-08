#include <stdio.h>
int main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int a[n];
	for (int k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	i=1;
	while (i<n){
		temp=a[i];
		j=i-1;
		while (j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
		i=i+1;
	}
        for (int v=0;v<n;v++){
        	printf("%d\n",a[v]);
        }
	return 0;
	
}
