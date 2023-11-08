#include <stdio.h>
int main(){
     int i,j,m,v;
       a[6]={6,7,2,1,4,3};
       i=0;
       while (i<n) {
            j=i+1;
             m=i;
             min=a[i]
             while (j<n){
                 if (a[j]<min){
                        min=a[j];
                        m=j;}
                 j=j+1;}
              a[i],a[m]=a[m],a[i];
              i=i+1;}
        v=0;
        while (v<n){
            printf("%d",a[v]);
            v=v+1;} }
