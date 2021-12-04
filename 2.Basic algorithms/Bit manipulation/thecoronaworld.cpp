#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define repu(v,s,e) for(ll v=s;v<e;v++)
#define repd(v,s,e) for(ll v=s;v>e;v--)
ll t,n,k;
int main(){
    fastio
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll a[n],maxv=(1LL<<22)-1,x=k,rem=n;
        repu(i,0,n) cin>>a[i];
        bool flag[n];
        repu(i,0,n) flag[i]=true;
        repd(i,21,-1){
            ll c=0;
            repu(j,0,n) if(flag[j] && !((a[j]>>i)&1)) c++;
            if(c>x || c==rem) continue;
            repu(j,0,n) if(flag[j] && !((a[j]>>i)&1)) flag[j]=false;
            x-=c,rem-=c;
            if(x==0) break;
        }
        repu(i,0,n) if(flag[i]) maxv&=a[i];
        cout<<maxv<<" "<<(k-x)<<"\n";
    }
    return 0;
}




//My approach
//#include <bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define repu(v,s,e) for(ll v=s;v<e;v++)
//#define repd(v,s,e) for(ll v=s;v>e;v--)
//ll t,n,k;
//int main(){
//    fastio
//    cin>>t;
//    while(t--){
//        cin>>n>>k;
//        ll a[n],maxv=(1LL<<22)-1,x=k,rem=n;
//        repu(i,0,n) cin>>a[i];
//        bool flag[n];
//        repu(i,0,n) flag[i]=true;
//        repd(i,(1<<21),0){
//            ll c=0;
//            repu(j,0,n) if(flag[j] && !(i&(1<<j))) c++;
//            if(c>x || c==rem) continue;
//            repu(j,0,n) if(flag[j] && !(i&(1<<j))) flag[j]=false;
//            x-=c,rem-=c;
//            if(x==0) break;
//        }
//        repu(i,0,n) if(flag[i]) maxv&=a[i];
//        cout<<maxv<<" "<<(k-x)<<"\n";
//    }
//    return 0;
//}
