#include <stdio.h>
int main(){
int i,j,v,n,m,c;
printf("enter the number");
scanf("%d",&n);
int a[3][3]={{0,0,0},{0,0,0},{0,0,0}};
i=0;
j=n/2;
v=1;
while (v<=n*n){
     if (i>=0){
         if (j<3){
            if (a[i][j]==0){
               a[i][j]=v;
               i=i-1;
               j=j+1;
               v=v+1;}
              else{
              i=i+2;
              j=j-1;}
              }
          else{
           j=0;}
       }
        else{if (j<n) {
                i=n-1;}
               else{
                  i=i+2;
                  j=j-1;}}     }
m=0;
while (m<3){
     c=0;
      while (c<3){
         printf("%d",a[m][c]);
         c=c+1;}
       m=m+1;
       printf("\n");}  
       return 0;  

}  
