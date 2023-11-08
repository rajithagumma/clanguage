#include <stdio.h>
int main(){
     int n,i,j,m,v,min,t;
       scanf("%d",&n);
       int a[n];
       for (int r=0;r<n;r++){
               scanf("%d",&a[r]);}
       i=0;
       while (i<n) {
            j=i+1;
             m=i;
             min=a[i];
             while (j<n){
                 if (a[j]<min){
                        min=a[j];
                        m=j;}
                 j=j+1;}
              t=a[i];
              a[i]=a[m];
              a[m]=t;
              i=i+1;}
        v=0;
        while (v<n){
            printf("%d\n",a[v]);
            v=v+1;} 
            return 0;}


