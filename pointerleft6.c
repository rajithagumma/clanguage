#include <stdio.h>
#include <stdlib.h>
void krotate(int* a,int n,int k){
	int v,temp,l,m,temp1,temp2;
	v=(k%n);
	for (int i=0;i<v/2;i++){
		temp=*(a+i);
		*(a+i)=*(a+(v-i-1));
		*(a+(v-i-1))=temp;
	}
	l=v+n;
	m=v;
	while (m<l/2){
		temp1=*(a+m);
		*(a+m)=*(a+(l-m-1));
		*(a+(l-m-1))=temp1;
		m=m+1;
	}
	for (int j=0;j<n/2;j++){
		temp2=*(a+j);
		*(a+j)=*(a+(n-j-1));
		*(a+(n-j-1))=temp2;
	}
}
int main(){
	int n,k;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter how many times rotate");
	scanf("%d",&k);
	int *a = (int *)malloc(n * sizeof(int));
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	krotate(a,n,k);
	for (int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}


