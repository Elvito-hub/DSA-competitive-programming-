#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long l,r;
    cin>>l>>r;
    if(l==r)
    {
    	cout<<"NO\n";
    	return 0;
	}
	cout<<"YES\n";
    for(long long i=l;i<=r;i+=2)
    {
    	cout<<i<<" "<<i+1<<endl;
	}
}
