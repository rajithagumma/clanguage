#include <stdio.h>
int main(){
    int n,i,j,max,m,v,t;
    /*printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    i=0;
    while  (i<n){
         scanf("%d",&v) ;
         a[i]=v;
         i=i+1;
           }*/
    int a[8]={1,2,3,4,5,6,7,8};
    j=0;
    max=a[0];
    int b[8/2];
    t=0;
    while (j<7){
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
      while (m<4){
            printf("%d",b[m]);
            m=m+1;}
            return 0;
            }
    
    
