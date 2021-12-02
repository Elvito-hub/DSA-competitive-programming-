#include<bits/stdc++.h>
using namespace std;
int power(long long x,unsigned int y,int p){
	int res=1;
	x=x%p;
	if(x==0) return 0;
	
	while(y>0)
	{
		if(y & 1)
		  res=(res*x)%p;
		  
		y=y>>1;//y=y/2;
		x=(x*x)%p;
	}
	return res;
}
void solve()
{
    const int MOD = 1e9 + 7;
    long long maximum, minimum;
    int no_of_players;
    cin>>no_of_players;
    
    //Max = sum of first n-1 squares ... Write it in a form to avoid overflow
    long long six_inverse = power(6, MOD - 2, MOD); 
    maximum =  (no_of_players - 1)*1LL*(no_of_players) %MOD;
    maximum = ( maximum*(2LL*no_of_players - 1) ) %MOD;
    maximum = ( maximum*six_inverse) %MOD;
    
    
    int no_of_matches = no_of_players - 1; //Play everyone but yourself.
    int wins = no_of_matches/2; //Everyone wins half their matches
    long long wins_squared = (wins*1LL*wins) % MOD;
    
    minimum = (no_of_players*wins_squared) % MOD;
    
    cout<<minimum<<" "<<maximum<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
	solve();
}
}
