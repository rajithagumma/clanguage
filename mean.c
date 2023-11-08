#include <stdio.h>
int main(){
    int n,t,sum1,mean,mid,median,count1,count,v,f,m;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
       scanf("%d",&a[i]);
       }
    for (int j=0;j<n-1;j++){
            for (int k=0;k<n-1;k++){
                   if (a[k]>a[k+1]){
                        t=a[k];
                        a[k]=a[k+1];
                        a[k+1]=t;   }
           } }

 sum1=0;
 for (int i=0;i<n;i++){
        sum1=sum1+a[i];}                  
mean=sum1/n;
printf("mean is %d\n",mean);
if (n%2!=0){
       median=a[n/2+1];
       printf("median is %d\n",median);}
else{
    mid=n/2;
    v=(a[mid-1]+a[mid])/2;
    printf("median is %d\n",v);}
count1=0;
f=a[0];
for (int k=0;k<n;k++){
       m=0;
       count=0;
       for (int m=0;m<n;m++){
          if (a[k]==a[m]){
               count=count+1;
               }
       }
       if (count>count1) {
            count1=count;
            f=a[k];}
       }
printf("mode  is %d\n",f);
return 0;
}
