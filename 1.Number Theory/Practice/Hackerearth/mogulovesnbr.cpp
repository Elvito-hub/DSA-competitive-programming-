#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
bool v[1000001];

void seive(){
memset(v,true,sizeof(v));
v[0]=v[1]=false;
    for(ll i=2;i*i<=1000000;i++)
    {

        if(v[i])

        {

            for(ll j=i*i;j<=1000000;j+=i)

            {

                v[j]=false;

            }

        }

    }

}

int main()

{

    fast;

    ll t,n,a;

    seive();

    ll x[1000001];

    x[0]=0;

    ll d=0;

    for(ll i=1;i<=1000000;i++)
{

if(v[i])

d++;

x[i]=d;

}

cin>>t;

    while(t--)

    {

        ll l,r;

        cin>>l>>r;

        if(l>r)

            l=r-l+(r=l);

        cout<<x[r]-x[l-1]<<"\n";

    }

}






































///////////////MINE HAS TL PROBLEMS/////////////////////

//#include<bits/stdc++.h>
//using namespace std;
//const int MX=1e6+5;
//bitset<MX> isPrime;
//void sieve(){
//	isPrime[2]=1;
//	for(int i=3;i<MX;i+=2) isPrime[i]=1;
//	
//	for(int p=3;p*p<MX;p++){
//		if(isPrime[p]){
//			for(int i=p*p;i<MX;i++) isPrime[i]=0;
//		}
//	}
//}
//
//int diviNbr(int n){
//	int count=0;
//	for(int i=1;i*i<=n;i++){
//		if(n%i==0) count+=2;
//		
//		if(i*i==n) count--;
//	}
//	return count;
//}
//int main(){
//	sieve();
//	int T;
//	cin>>T;
//	while(T--){
//		int l,r,count=0;
//		cin>>l>>r;
//		if(l>r) swap(l,r);
//		for(int i=l;i<=r;i++){
//			if(isPrime[diviNbr(i)]&&diviNbr(i)%2==0) count++;
//		}
//		cout<<count<<"\n";
//	}
//}

