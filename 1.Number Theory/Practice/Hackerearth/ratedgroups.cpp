#include<bits/stdc++.h>
using namespace std ;
 
#define int     long long int
#define pb      push_back
#define all(a)  (a).begin(),(a).end()  		
 
 
void solve()
{
    int n ;
    cin >> n ;
    int a[n], b[n] ;
    vector<int> one, zero ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    set<int> stz, sto ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> b[i] ;
        if(b[i] & 1)
        {
            one.pb(a[i]) ;
            sto.insert(a[i]) ;
        }
        else
        {
            zero.pb(a[i]) ;
            stz.insert(a[i]) ;
        }
    }
 
    int cnt = 0 ;
    sort(all(one), greater<int>()) ; sort(all(zero), greater<int>()) ;
    map<int, bool> visz, viso ;
    for(auto i : one)
    {
        if(viso[i] == true)
            continue ;
        viso[i] = true ;
        cnt++ ;
        for(int j = 1 ; j * j <= i ; j++)
        {
            if(i % j == 0)
            {
                if(sto.count(j))
                {
                    viso[j] = true ;
                }
                if(i / j != j and sto.count(i/j))
                {
                    viso[i/j] = true ;
                }
            }
        }
    }
    for(auto i : zero)
    {
        if(visz[i] == true)
            continue ;
        visz[i] = true ;
        cnt++ ;
        for(int j = 1 ; j * j <= i ; j++)
        {
            if(i % j == 0)
            {
                if(stz.count(j))
                {
                    visz[j] = true ;
                }
                if(i / j != j and stz.count(i/j))
                {
                    visz[i/j] = true ;
                }
            }
        }
    }
    cout << cnt << endl  ;
}
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t = 1 ;
    cin >> t ;
    while(t--)
    {
        solve() ;
    }
    return 0 ;
}
