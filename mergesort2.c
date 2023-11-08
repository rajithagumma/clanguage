#include <stdio.h>
int main(){
	int m,n,v,r,i,j,k,s,temp,temp1;
	scanf("%d%d",&m,&n);
	k=m+n;
	int a[k];
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
	temp=a[0];
	while (s<k){
		if (temp<=b[j]){
		        temp1=a[i+1];
			a[s]=temp;
			s=s+1;
			i=i+1;
			temp=temp1;
		}
		else{
			//temp=a[i];
			a[s]=b[j];
			s=s+1;
			j=j+1;
		}
	}
	for (int i=0;i<k;i++){
		printf("%d",a[i]);
	}
	
}
