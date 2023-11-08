#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    char s[n],t[n],u[n],nstr[n];
	    printf("enter the strings");
	    scanf("%s%s%s",s,t,u);
	    int v,w,r;
	    w=t[0]-s[0];
	    v=s[0]-t[0];
	    if (w>=v){
	    	r=w;
	    }
	    else{
	    	r=v;
	    }
	    printf("r=%d",r);
	    int j,z1,h,c;
	    c=0;
	    j=0;
	    while ( u[j]!='\0'){
	    	z1=u[j];
	    	z1=z1-97;
	    	h=z1+r;
	    	if (h>=26){
	    		z1=h-26;
	    		nstr[c]=z1+97;
	    	}
	    	else{
	    		nstr[c]=z1+r+97;
	    	}
	    	c=c+1;
	    	j=j+1;
	    }
	    printf("%s\n",nstr);
	    
	}
	return 0;
}


