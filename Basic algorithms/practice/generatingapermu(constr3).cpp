//https://www.codechef.com/problems/GENPERM





#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 
#define all(a) (a).begin(),a.end()
#define fastio                            \
      ios_base::sync_with_stdio( false ); \
      cin.tie(NULL);                      \
      cout.tie(NULL);                     \

int main()
{
	fastio;
	int T;
	cin>>T;
	while(T--)
	{
		ll n,k,i;
		bool found=0;
		cin>>n>>k;
		vector<int> v;
		for(i=1;i<=n;i++)
		   v.pb(i);
		   
		do{
			vector<int>::iterator p=v.begin(); 
			ll sum=0;
			while(p!=v.end()-1)
			{
				sum+=max(*p,*(p+1));
				p++;
			}
			if(sum==k){
				found=true;
				for(int i=0;i<n;i++) cout<<v[i]<<" ";
				cout<<"\n";
				break;
			}
			
		}while(next_permutation(all(v)));
		if(!found)
		  cout<<-1<<endl;
	}
}
