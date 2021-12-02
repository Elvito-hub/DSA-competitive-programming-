#include <bits/stdc++.h>
using namespace std;
 
typedef long long int 		ll;
typedef vector<ll> 			vi;
#define present(s,x) 		s.find(x)!=s.end()
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0) , cout.tie(0);
 
	int t;cin>>t;
	ll l,r;
	while(t--){
		cin>>l>>r;
		vi factors(10001,0);
		ll mx=0,ans=0;
		//sqrt(n)*log(n)
		for(int i=1;i*i<=r;i++) //sqrt(n)
		{
			//this for helps us to find the first divisor of our range
			ll sq=i*i;
			ll first_div= ((l-1)/i+1)*i;
			ll start=max(first_div,sq);
			
			//then if i*i=j we'll have to increment only once or otherwise give 2 new divisors
			for(int j=start;j<=r;j+=i)  //log(n)
			{
				if(j==i*i)
					factors[j-l]++;
				else
					factors[j-l]+=2;			
			}			     
		}
		for(int i=0;i<(r-l+1);i++)
			if(factors[i]==mx)ans++;
			else if(factors[i]>mx)
					mx=factors[i],ans=1;
		cout<<ans+1<<"\n";
	}
}











































//Has TL problem


//#include<bits/stdc++.h>
//using namespace std;
//const int MX=1e8+5;
//int divi[MX]={0};
//int divisors(){
//	for(int i=1;i<=MX;i++){
//		for(int j=i;j<=MX;j+=i) divi[j]++;
//	}
//}
//int main(){
//	divisors();
//	int T;
//	cin>>T;
//	while(T--){
//		int a,b,max=0,cnt=0;
//		cin>>a>>b;
//		for(int i=a;i<=b;i++){
//			if(divi[i]>max){
//				max=divi[i];
//				cnt=1;
//		}else if(divi[i]==max){
//			cnt++;
//		}
//		}
//		cout<<cnt+1<<endl;
//	}
//}
