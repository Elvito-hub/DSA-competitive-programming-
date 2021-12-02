#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MX=1e6 +5;
#define rep(i,n) for(i = 0;i<n;i++)
#define fr(a,b,c) for(a = b;a<=c;a++)

bitset<MX> isPrime;
void  sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	
	for(int p=3;p*p<=MX;p+=2){
	if(isPrime[p]){
		for(int i=p*p;i<=MX;i+=p) isPrime[i]=0;
	}	
	}
}
int main(){
	sieve();
	ll T,n,i;
    ll myArr[MX];
    //first prime nmbr with mod11=1 is 23 so all prime nbr less than 23 take 23 
    rep(i,23)
        myArr[i] = 23;
    ll curr = 23;
    fr(i,23,MX)
    {
    	//if we find another prime nmbr with mod11
        if(isPrime[i] && i%11==1)
        {
            myArr[i] = i;
            curr = i+1;
            while(curr<=MX && !(isPrime[curr] && ((curr%11)==1)))
                curr++;
            if(curr>=MX)
                curr = 1000033;
        }
            else
            myArr[i] = curr;
		}
		
		cin>>T;
		while(T--){
			cin>>n;
			cout<<myArr[n]<<endl;
		}
    return 0;
}
