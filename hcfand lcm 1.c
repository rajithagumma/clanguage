#include <stdio.h>
#define ll long long int
int main(void) {
	// your code goes here
	ll t;
	scanf("%lld",&t);
	for (ll i=0;i<t;i++){
	    ll a,b,max,min,hcf,lcm,r;
	    scanf("%lld%lld",&a,&b);
	    if (a>b){
	        max=a;
	        min=b;
	    }
	    else{
	        max=b;
	        min=a;
	    }
	    r=max%min;
	    while (r!=0){
	        max=min;
	        min=r;
	        r=max%min;
	    }
	    hcf=min;
	    lcm=(a*b)/hcf;
	    printf("%lld %lld\n",hcf,lcm);
	    
	}
	return 0;
}


