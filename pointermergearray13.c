#include <stdio.h>
#include <stdlib.h>
void merge(int* a,int* b,int* c,int m,int n,int k){
	int i,j,s;
	i=0;
	j=0;
	s=0;
	while (i<m && j<n && s<k){
		if ((*(a+i))<=(*(b+j))){
			*(c+s)=*(a+i);
			i=i+1;
			s=s+1;
		}
		else{
			*(c+s)=*(b+j);
			j=j+1;
			s=s+1;
		}
	}
	if (i==n){
		while (j<n){
			*(c+s)=*(b+j);
			j=j+1;
			s=s+1;
		}
	}
	else{
		while (i<m){
			*(c+s)=*(a+i);
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
	int* a=(int *)malloc(m * sizeof(int));
	int* b=(int *)malloc(n * sizeof(int));
	int* c=(int *)malloc(k * sizeof(int));
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

