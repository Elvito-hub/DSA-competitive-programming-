#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
void divi(ll n)
{
    vector<ll> f;
    for(ll i=1;i<=(ll)sqrt(n);i++)
    {
        if(n%i==0)
        {
            f.pb(i);
            if(n/i!=i)
            {
                f.pb(n/i);
            }
        }
    }
    sort(f.begin(),f.end());

    for(ll i=1;i<f.size();i++)

        cout<<f[i]<<" ";

}

int main()

{

    fast;

    ll t,n,a;

    cin>>t;

    vector<ll> v;

    vector<ll> diff;

    for(ll i=0;i<t;i++)

    {

        cin>>a;

        v.pb(a);

    }


 

    for(ll i=0;i<t-1;i++)

    {

        diff.pb(abs(v[i]-v[i+1]));

    }

    

    ll g=diff[0];

    for(ll i=1;i<t-1;i++)

    {

        g=__gcd(g,diff[i]);

    }

    divi(g);



 

}
