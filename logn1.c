#include <stdio.h>
int main(){
	
	int n,i,j,max,m,v,t;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("n=%d\n",n);
	i=0;
	while(i<n){
		printf("i=%d\n",i);
	 	scanf("%d", &a[i]);
	 	i++;
	}
	printf("Done Here.");
	j=0;
	max=a[0];
	int b[n/2];
	t=0;
	while (j<=n-2){
	    if (a[j]>a[j+1]){
		  if (a[j]>max){
		      b[t]=max;
		      max=a[j];
		      t=t+1;
		       }
		    else{
		    b[t]=a[j];
		    t=t+1; }}
	      else {
		 if (a[j+1]>max){
		      b[t]=max;
		      max=a[j+1];
		      t=t+1;}
		   else {
		   b[t]=a[j+1];
		   t=t=1;}}
	      j=j+2 ;       }
	m=0;
	while (m<n){
	     printf("%d",b[m]);
	     m=m+1;
	     }
	  return 0;
	  }
    
    
