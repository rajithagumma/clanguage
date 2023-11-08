#include <stdio.h>
int main(){
      float f,c;
      int l,u,s;
      l=0;
      u=300;
      s=20;
      f=u;
      while (f>=l){
           c=(5.0/9.0)*(f-32.0);
           printf("%3.0f%6.1f\n",f,c);
           f=f-s;
           }
           return 0;
 }
 
/* #include <stdio.h>
 int main(){
       float f,c,l;
       int u,s;
       l=-17.8;
       u=148;
       s=11.1;
       c=l;
       while (c<=u){
             f=(9.0/5.0)*c+32.0;
             printf("%6.1f %3.0f\n",c,f);
             c=c+s;
             }}*/
