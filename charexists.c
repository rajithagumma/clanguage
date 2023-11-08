#include <stdio.h>
int main(){
       int n,i,c;
       char k;
       printf("enter the value of n");
       scanf("%d",&n);
       char st[n];
       printf("enter the string");
       scanf("%s",st);
       printf("enter char");
       scanf("%c",&k) ;
       i=0;
       c=0;
       while (i<n){
            if (st[i]=='k'){
               c=c+1;}
              i=i+1;}
        printf("%d",c);
        return 0;
       
       }
