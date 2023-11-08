#include <stdio.h>
int main(){
     int a,b,d1,d2,r,hcf,lcm;
     printf("enter the numbers");
     scanf("%d%d",&a,&b);
     if (a>b){
         d1=a;
         d2=b;
         }
     else{ 
         d1=b;
         d2=a;
         }
     r=d1%d2;
     while (r!=0){
              d1=d2;
              d2=r;
              r=d1%d2;
              }
          hcf=d2;
          lcm=(a*b)/hcf;
          printf("%d  %d",hcf,lcm);
      return 0;
     }
