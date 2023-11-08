/*#include <stdio.h>
int main(){
     int i,j,k,v,n,t,f;
     scanf("%d",&n);
     i=0;
     int a[n];
     while (i<n){
           scanf("%d",&a[i]);
           i=i+1;}
     v=a[0];
     j=0;
     while (j<n-1){
            a[j]=a[j+1];
            j=j+1;}
     a[j]=v;
     f=0;
     while (f<n){
          printf("%d",a[f]);
          f=f+1;}
     return 0;
     }*/
     
     
/*#include <stdio.h>
int main(){
     int i,j,k,v,n,t,f,g;
     scanf("%d%d",&n,&k);
     i=0;
     int a[n];
     while (i<n){
           scanf("%d",&a[i]);
           i=i+1;}
     g=0;
     while (g<k){
             v=a[0];
             j=0;
             while (j<n-1){
                a[j]=a[j+1];
                j=j+1;}
            a[j]=v;
            f=0;
            while (f<n){
                printf("%d",a[f]);
               f=f+1;}
             g=g+1;
             printf("\n");}
       return 0;
     }*/
     
/*#include <stdio.h>
int main(){
     int n,i,j,k,t,m,v;
     scanf("%d",&n);
     int a[n];
     i=0;
     while (i<n){
           scanf("%d",&a[i]);
           i=i+1;}
       j=0;
      int result=0;
       while (j<n){
              k=0;
              int sum1=0;
              int sum2=0;
              while (k<j){
                    sum1=sum1+a[k];
                    k=k+1;}
              t=n;
              while (t>n){
                    sum2=sum2+a[t];
                    t=t-1;}
              if (sum1==sum2){
                     result=1;
                     break;
               j=i+1;}}
          if (result=1){
              printf("%s","yes");}
          else {
              printf("%s","no")}
         return 0;}
     */

