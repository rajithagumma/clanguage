#include <stdio.h>
int main(){
	int m,n,v,r,s;
	scanf("%d%d",&m,&n);
	k=m+n;
	int c[k];
	int a[m];
	int b[n];
	for (int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for (int j=0;j<n;j++){
		scanf("%d",b[j]):
	}
	i=0;
	j=0;
	s=0;
	while (i<m && j<n && s<k){
		if (a[i]<a[j]){
			j=j+1;
			if (a[j]>a[i]){
				i=i+1;
				c[s]=a[i];
				s=s+1;
			}
			else{
				j=j+1;
			}
		}
		else{
			i=i+1;
			if (a[i]>a[j]){
				j=j+1;
				c[s]=a[j];
				k=k+1;
			}
			else{
			 i=i+1;
			}
		}
	}
	for (int i=0;i<k;i++){
		printf("%d",c[i]);
	}
}
