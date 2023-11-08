#include <stdio.h>
int main(){
	int m,n,v,r,s,i,j,k;
	printf("enter m value");
	scanf("%d",&m);
	printf("enter n value");
	scanf("%d",&n);
	k=m+n;
	int c[k];
	int a[m];
	int b[n];
	for (int t=0;t<m;t++){
		scanf("%d",&a[t]);
	}
	for (int z=0;z<n;z++){
		scanf("%d",&b[z]);
	}
	i=0;
	j=0;
	s=0;
	while (i<m && j<n && s<k){
		if (a[i]<=b[j]){
			c[s]=a[i];
			i=i+1;
			s=s+1;
		}
		else{
			c[s]=b[j];
			j=j+1;
			s=s+1;
		}
	}
	if (i==n){
		while (j<n){
			c[s]=b[j];
			j=j+1;
			s=s+1;
		}
	}
	else{
		while (i<m){
			c[s]=a[i];
			i=i+1;
			s=s+1;
		}
	}
	for (int i=0;i<k;i++){
		printf("%d\n",c[i]);
	}
}
