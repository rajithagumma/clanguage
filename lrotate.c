 #include <stdio.h>
int main(){
    int i,n,v,j,c,t,k,m;
    scanf("%d",&n);
    int l[n];
    i=0;
    while (i<n){
        scanf("%d",&v) ;
        l[i]=v;
        i=i+1;}
    j=0;
    k=0;
    while (j<n){
       if (l[j]!=0){
            t=l[j];
            l[j]=l[k];
            l[k]=t;
            k=k+1;
             }
         j=j+1;
         }
    m=0;
    while (m<n){
         printf("%d ",l[m]);
         m=m+1;}
           
    return 0;
      
        }
        

