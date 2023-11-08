/*#include <stdio.h>
int main() {

     printf("hello");
     return 0;
     }*/
 
 /*#include <stdio.h>
 int main(){
 
     int a,b,c;
     a=4;
     b=7;
     c=a+b;
     printf("%d",c);
     return 0;
     }*/
   
   
 /*#include <stdio.h>
 int main() {
      int a,b,c;
      printf("enter the number");
      scanf("%d%d%d",&a,&b,&c);
          if (a>b){
             if (a>c){
                printf("%d",a);
                }}
          else {printf("%d",b);
                  }
          }*/
          
          
          
          
          
 /*#include <stdio.h>
 int main(){
    int a,b,c,d,e,f,g,h,max1,min1,max2,min2,max3,min3,max4,min4,max5,min5,max6,min6,smax;
    printf("enter the numbers");
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
    if (a>b){
        max1=a;
        min1=b;
        }
     else{ max1=b;
     min1=a;}
     
     if (c>d){
        max2=c;
        min2=d;
        }
     else{ max2=d;
     min2=c;
     }
     
     if (e>f){
        max3=e;
        min3=f;
        }
     else{ max3=f;
     min3=e;}
     
     if (g>h){
        max4=g;
        min4=h;
        }
     else{ max4=h;
     min4=g;
     }
     
     if (max1>max2){
        max5=max1;
        min5=max2;
        }
     else{ max5=max2;
     min5=max1;
     }
     
     if (max3>max4){
        max6=max3;
        min6=max4;
        }
     else{ max6=max4;
     min6=max3;
     }
     
     if (max5>max6){
        if (max6>min5){
        
           if (max6>min1){
              smax=max6;
              }
            else{
            smax=min1;
            }}
        else {if (min5>min1){
             smax=min5;
             }
              else {smax=min1;
              }}}
      else {if (max5>min6){
               if (max5>min4){
                  smax=max5;}
                else{
                smax=min4;
                }}
            
             else {if (min6>min4) {
                      smax=min6;}
                    else {
                    smax=min4;}
              }
      }
   printf("%d",smax);
   return 0;
   }*/
   
   
   
   
   
  /* #include <stdio.h>
   int main(){
        int i,n,a,smax,max,v;
        printf("enter the n ");
        scanf("%d",&n);
        printf("enter the first user input");
        scanf("%d",&a);
        smax=max=a;
        i=1;
        while (i<=n){
           scanf("%d",&v);
           if (v>max){
           smax=max;
           max=v;}
           else{ if (v>smax){
           smax=v;
           }
           
           }
           i=i+1;
          }
       printf("%d",smax);
       return 0;
   
   
   
   
   }*/
   
   
   
   
/*#include <stdio.h>
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
     }*/
     
     
/*#include <stdio.h>
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
          }*/
          
         
         
/*#include <stdio.h>
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
              j=j+1;}
             if (j==k){
                 n[t]=a[i];
                 a[i]=-1;
                 j=0;
                 t=t+1;}
              if (t==5){
                  break;}
               if (i==4){
                 i=0;}
               else{
               i=i+1;}
                    
                    
                    }
          v=0;
          while (v<5){
                printf("%d\n",n[v]);
                v=v+1;}
            return 0;}*/
            
/* #include <stdio.h>


	
}*/

