#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
	    int s,a,b,c,p,v;
	    scanf("%d%d%d%d",&s,&a,&b,&c);
	    p=s*(c/100);
	    printf("p=%d\n",p);
	    v=s+p;
	    printf("v=%d\n",v);
	    if (v>=a && v<=b){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
	return 0;
}
