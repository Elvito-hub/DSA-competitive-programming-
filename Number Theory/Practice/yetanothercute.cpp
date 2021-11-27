#include <bits/stdc++.h>
#define REP(i,a,n) for(int i=a;i<n;i++)
// #define mod 1000000007
#define pb push_back
// #define ff first
// #define ss second
// #define ii pair<int,int>
// #define vi vector<int>
// #define vii vector<ii>
#define N 10000
#define ll long long int
#define endl '\n'
using namespace std;
vector<int> primes(10000,1);
void generatePrimes(){
    primes[1]=0;
    for(int i=2;i*i<10000;i++){
        if(primes[i]){
            for(int j=i*i;j<10000;j+=i)
                primes[j]=0;
        }
    }
}
int main(){
    generatePrimes();
    int t;
    cin>>t;
    while(t--){
        ll l,r,i,j;
        cin>>l>>r;
        int div[r-l+1];
        memset(div,0,sizeof(div));
        for(i=1;i*i<=r;i++){
            ll sq=i*i;
            // j starts with first number in range [L, R] which is multiple of i
            for(j=((l-1)/i+1)*i;j<=r;j+=i){
                if(j<sq) continue;
                if(j==sq) div[j-l]+=1;
                else div[j-l]+=2;
            }
        }
        int ans=0;
        for(i=l;i<=r;i++) if(primes[div[i-l]]) ans++;
        cout<<ans<<endl;
    }
}




























//Mine has TLE problem


//#include<bits/stdc++.h>
//using namespace std;
//const int MX=1e8+1;
//int divi[MX];
//bool isPrime[MX];
//int sieve()
//{
//	memset(isPrime,true,MX);
//	isPrime[1]=0;
//	for(int i=2;i*i<MX;i++)
//	{
//		if(isPrime[i]==1){
//			for(int j=i*i;j<MX;j+=i) isPrime[j]=0;
//		}
//	}
//}
//int divisors()
//{
//	for(int i=1;i<MX;i++) divi[i]=1;
//	for(int i=2;i<MX;i++)
//	{
//		for(int j=1;j*i<MX;j++) divi[i*j]++;
//	}
//}
//int main()
//{
//	sieve();
//	divisors();
//	int T;
//	cin>>T;
//	while(T--)
//	{
//		int r,l,count=0;
//		cin>>l>>r;
//		for(int i=l;i<=r;i++)
//		{
//			if(isPrime[divi[i]]) count++;
//		}
//		cout<<count<<endl;
//	}
//}
