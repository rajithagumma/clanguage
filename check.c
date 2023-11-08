#include <stdio.h>
int main(){
	int r,a,b,c;
	c=0;
	for (r=scanf("%d %d",&a,&b);r!=-1;r=scanf("%d %d",&a,&b)){
	        c=c+1;
		if (a!=7 || b!=9){
		        printf("%d\n",c);
		        printf("something wrong a=%d ,b=%d",a,b);
		        break;
		
                }
        }
        printf("%d\n",c);
        if (c==40320){
        	printf("all are correct\n");}
       
	
	return 0;
  }
