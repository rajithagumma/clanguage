#include <stdio.h>
int main(){
     int n,i,j,flag,sum;
     printf("enter the n value");
     scanf("%d",&n);
     i=2;
     while (i<=n){
         j=2;
         flag=1;
         while (j*j<=i){
             if (i%j==0){
                flag=0;}
              j=j+1;}
         if (flag==1){c
            printf("%d\n",i);
            }
          i=i+1;}
          return 0;
          }
