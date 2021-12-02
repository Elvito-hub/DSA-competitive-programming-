#include <bits/stdc++.h>
#define ll long long
#define mod 1000003
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll ar[1000004] = {0};
ar[0] = 0;
ar[1] = 1;
for(ll i=2; i<1000004; i++)
ar[i] = (ar[i-1] * i%mod)%mod;

int t;

cin>>t;

while(t--)

{

ll N, X;

cin>>N>>X;

//for N>mod, N=0 because for every number more than mod in factorial a number will come having value equal to mod so its modulus will be zero, therefore factorial will also be zero.

if(N > mod)

N=0;

cout<<(ar[N] * X%mod)%mod<<"\n";

}

}
