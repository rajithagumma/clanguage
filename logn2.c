#include <stdio.h>
#include <math.h>
int main(){
    int n,c,i,j,v,t,k,max,smax,m,f,counter;
    //int T;
    //scanf("%d", &T);
    	    
	    c=0;
	    counter = 0;
	    scanf("%d",&n);
	    f=n;
	    int a[n];
	    for (int h=0;h<n;h++){
	    	scanf("%d",&a[h]);
	    }
	    while (f>1){
		f=f/2;
		c=c+1;
	    }
	    //printf("%d",c);
	    int l[c][n];
	    int w[n];
	    for (int i=0;i<n;i++){
		   w[i]=i;
	    }
	    i=0;
	    while (i<c){
		 j=0;
		 v=0;
		 int w1[n/2];
		 while (j<=n-2){
		 	if (a[w[j]]>a[w[j+1]]){
				w1[v]=w[j];
				l[i][w[j]]=w[j+1];
		        }
		       	else{
		          	w1[v]=w[j+1];
				l[i][w[j+1]]=w[j];
		      	}
		        v=v+1;
		        counter=counter+1;
		       	j=j+2;   
		}
		t=0;
		for (int i=0;i<n/2;i++){ 
		     w[t]=w1[t];
		     t=t+1;
		}
		i=i+1;
		n=n/2;
	    }
	    m=w[0];
	    k=c-1;
	    if (a[l[k][m]]>a[l[k-1][m]]){
		        smax=a[l[k][m]];
		        k=k-2;
		        counter=counter+1;
		 }
		 else{	
		 	smax=a[l[k-1][m]];
		 	k=k-2;
		 	counter=counter+1;
		 }
	    while (k>=0){
		 if (a[l[k][m]]>smax){
		        smax=a[l[k][m]];
		 }
		 counter=counter+1;
		 k=k-1;
	    }
	    printf(" second max is %d \n ",smax);
	    printf("%d\n",counter);
	
	
	      
    return 0;
}
