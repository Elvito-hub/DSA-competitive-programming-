#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ma 1000000
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);    
using namespace std;
int main()
{
    fast;
    bool a[ma+1];
    memset(a,true,ma+1);
    for(ll i=2;i*i<=ma;i++)
    {
        if(a[i])
        {
            for(ll j=i*i;j<=ma;j+=i)
            {
                a[j]=false;
            }
        }
    }
    vector<ll> pref(ma+1);
    pref[0]=pref[1]=0;
    for(ll i=2;i<=ma;i++)
    {
        if(a[i])
            pref[i]=pref[i-1]+i;
        else
            pref[i]=pref[i-1];
    }
    ll t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
            cout<<pref[r]-pref[l-1]<<endl;
    }
}
