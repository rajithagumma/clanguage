#include <stdio.h>
void merge(int a[],int b[],int c[],int m,int n,int k){
	int i,j,s;
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
}
int main(){
	int m,n,k;
	printf("enter m value");
	scanf("%d",&m);
	printf("enter n value");
	scanf("%d",&n);
	k=m+n;
	int a[m];
	int b[n];
	int c[k];
	for (int t=0;t<m;t++){
		scanf("%d",&a[t]);
	}
	for (int z=0;z<n;z++){
		scanf("%d",&b[z]);
	}
	merge(a,b,c,m,n,k);
	for (int i=0;i<k;i++){
		printf("%d ",c[i]);
	}
	
}
