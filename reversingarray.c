/*#include <stdio.h>
int main(){
      int i,j,c,n,v,t;
      printf("enter ");
      scanf("%d",&n);
      int l[n];
      i=0;
      c=0;
      while (i<n){
            scanf("%d",&v);
            l[c]=v;
            c=c+1;
            i=i+1;}
      j=n-1;
      int r[n];
      c=0;
      while (j>=0){
            r[c]=l[j];
            c=c+1;
            j=j-1;}
      t=0;
      while (t<n){
             printf("%d\n",r[t]);
             t=t+1;}
      
       
            
           return 0;}*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,j,smin,fmin,m;
	scanf("%d",&t);
	i=0;
	while (i<t){
	    scanf("%d",&n);
	    int a[n];
	    j=0;
	    while (j<n){
	        scanf("%d",&a[j]);
	        j=j+1;
	    }
	if (n==2){
	    if (a[0]>a[1]){
	        smin=a[0];
	    }
	    else {
	        smin=a[1];
	    }
	}
	else{
	   smin=a[0];
	   fmin=a[0];
	   m=0;
	   while (m<n){
	      if (a[m]<fmin){
	          smin=fmin;
	          fmin=a[m];
	      }
	      else {if (a[m]<smin && a[m]!=fmin){
	           smin=a[m];
	    }
	        }
	    m=m+1;
	}
	    
	}
	
	printf("%d\n",smin);
	i=i+1;
	
	}
	return 0;
}







