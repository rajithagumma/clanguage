/*#include <stdio.h>
int main(){
   int n,i,j,v,t,k;
   i=0;
   scanf("%d",&n);
   int l[n];
   while (i<n){
       scanf("%d",&v)
       l[i]=v;
       i=i+1;}
     j=0;
     while (j<n/2){
          k=l[j];
          l[j]=l[n-j-1];
          j=j+1;
          }
     t=0;
     while (t<n){
     
           printf("%d",l[t]);
           t=t+1;}
           return 0;
          
          
          }*/
          
          
          
          
          
#include <stdio.h>
int main(){
   int n,i,j,v,t,k;
   i=0;
   scanf("%d",&n);
   int l[n];
   while (i<n){
       scanf("%d",&v)
       l[i]=v;
       i=i+1;}
   j=0;
   t=1;
   while (j<n-1){
       if (l[j]>l[j+1]){
            t=0;
            break;
         
         }
      j=j+1;
      }
  if (t==1){
       printf("%s","yes");
      }
  else{
     printf("%s","no");}
     return 0;
}
