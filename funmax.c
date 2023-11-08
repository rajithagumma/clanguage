#include <stdio.h>
int max(int ,int ,int );
void main(){
	int a,b,c,max1;
        scanf("%d%d%d",&a,&b,&c);
        max1=max(a,b,c);
        printf("%d",max1);
   }
int max(int x,int y,int z){
	int max1;
	max1=x;
	if (y>max1){
		max1=y;
	    }
	if (z>max1){
	 	max1=z;
	 }
	 return max1;
	 }

