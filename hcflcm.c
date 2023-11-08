#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,low,i;
	    scanf("%d %d",&a,&b);
	     if(a>b)
        low=b;
        else
        low=a;
        for(i=low;i>0;i--)
        {
            if(a%i==0 && b%i==0)
            {
                break;
            }
        }

            long int lcm =(long int)a*b/i;
            printf("%d %li\n",i,lcm);
	}
	return 0;
}


