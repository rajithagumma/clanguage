/*#include <stdio.h>
int main(){ 
     int i,j,max1,c,num;
     i=1;
     max1=0;
     while (i<=100){
         c=0;
         j=i;
         while (j>1){
             if (j%2==0){
                j=j/2;
                c=c+1;}
               else {
               j=3*j+1;
               c=c+1;
               }}
            if (c>max1){
              max1=c;
              num=i;}
          i=i+1;}
       printf("%d",num);
       return 0;
            

}*/
#include <stdio.h>
int main(){
    int i,j,n,t,m,k;
    printf("enter the number");
    scanf("%d",&n);
    int A[n];
    int B[n];
    i=0;
    while (i<n){
        scanf("%d",&t);
        A[i]=t;
        i=i+1;}
   m=0;
   while (m<n){
      printf("%d",A[n]);
      m=m+1;}
    k=n-1;
    while (k>=0){
    printf("%d",A[k]);
    k=k-1;}
    return 0;}
