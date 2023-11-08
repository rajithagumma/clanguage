#include <stdio.h>
int main(){
	int k,n,v,temp,l,temp1,m,temp2;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter how many times rotate");
	scanf("%d",&k);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	v=(k%n);
	for (int i=0;i<v/2;i++){
		temp=a[i];
		a[i]=a[v-i-1];
		a[v-i-1]=temp;
	}
	l=v+n;
	m=v;
	while (m<l/2){
		temp1=a[m];
		a[m]=a[l-m-1];
		a[l-m-1]=temp1;
		m=m+1;
	}
	for (int j=0;j<n/2;j++){
		temp2=a[j];
		a[j]=a[n-j-1];
		a[n-j-1]=temp2;
	}
	for (int t=0;t<n;t++){
		printf("%d",a[t]);
	}
	return 0;	
}
