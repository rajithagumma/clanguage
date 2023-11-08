#include <stdio.h>
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
              t=j+1;
              while (t<n){
                    sum2=sum2+a[t];
                    t=t+1;}
              if (sum1==sum2){
                     result=1;
                     break;}
               j=j+1;}
          if (result==1){
              printf("%s","yes");}
          else {
              printf("%s","no");}
         return 0;}

