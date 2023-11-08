# include <stdio.h>
int mian(){
    int i,n,v,j,c,t,k;
    scanf("%d",&n);
    int l[n];
    i=0;
    while (i<n){
        scanf("%d",&v) ;
        i=i+1;}
    j=0;
    c=0;
    t=0;
    while (j<n ){
         if (l[j]!=0){
              l[t]=l[j];
              t=t+1;
              }
         else {
            c=c+1;
            }
         j=j+1;
              }
    while (t<n){
           l[t]=0;
           t=t+1;}
    k=0;
    while (k<n){
         printf("%d",l[k]);
         k=k+1;}
    return 0;
