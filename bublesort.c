#include <stdio.h>
int main(){
      int n,t;
      scanf("%d",&n);
      int  a[n];
      for (int i=0;i<n;i++){
             scanf("%d",&a[i]);
             
             }
      for (int j=0;j<n-1;j++){
              for (int k=0;k<n-1;k++){
                    if (a[k]>a[k+1]){
                           t=a[k];
                           a[k]=a[k+1];
                           a[k+1]=t;	
                    }
                    
                    }
              }
     for (int v=0;v<n;v++){
             printf("%d",a[v]);
             }
     return 0;
     }
      
      
    
