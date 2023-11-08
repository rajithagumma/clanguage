#include <stdio.h>
int main(){
int i,j,x,y,h,k,v,m;
int l[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
i=0;
j=1;
x=0;
y=-1;
while (j<=16){
     h=d[i][0];
     k=d[i][1];
     if (x+h<4){
          if (y+k<4){
              if (l[x+h][y+k]==0){
                   l[x+h][y+k]=j;
                    x=x+h;
                    y=y+k;
                    j=j+1;
                    }
                 else{
                 i=(i+1)%4;}
               }
             else {
             i=(i+1)%4;}
             }
             
       else {
       i=(i+1)%4;}
 
     
     
     }
 v=0;
 while (v<4){
   m=0;
   while (m<4){
         printf("%d ",l[v][m]);
         m=m+1;}
     printf("\n");
      v=v+1;
      }
     return 0;}

