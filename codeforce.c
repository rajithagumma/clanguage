#include <stdio.h>
#define ll long long int
int main(){
    ll t;
    scanf("%lld",&t);
    for (ll i=0;i<t;i++){
        ll n;
        scanf("%lld",&n);
        ll arr[n];
        for (ll j=0;j<n;j++){
            scanf("%lld",&arr[j]);
        }
        ll q;
        scanf("%lld",&q);
        for (ll k=0;k<q;k++){
            ll x,y,c,u,v;
            scanf("%lld%lld",&x,&y);
            c=0;
            u=0;
            while (u<n-1){
                v=u+1;
                while (v<n){
                    if ((arr[u]+arr[v]==x) && (arr[u]*arr[v]==y)){
                        c=c+1;
                    }
                    v=v+1;
                }
                u=u+1;
            }
            printf("%lld ",c);
        }
    }
    return 0;
}
