#include <stdio.h>
int main(){
	int k,i,j,t,v;
    int a[5]={3,6,7,5,10};
    int n[5];
    printf("enter the value of k");
    scanf("%d",&k);
    i=0;
    j=0;
    t=0;
    while (i<5){
		if (a[i]!=-1){
        	j=j+1;
        }
        if (j==k){
        	n[t]=a[i];
            a[i]=-1;
            j=0;
            t=t+1;
        }
        if (t==n){
        	break;
        }
        if (i==n-1){
        	i=0;
        }
        else{
            i=i+1;
        }
                    
                    
    }
    v=0;
    while (v<n){
         printf("%d\n",n[v]);
         v=v+1;
    }
	return 0;
}
            
