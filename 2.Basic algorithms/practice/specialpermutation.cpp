#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end()
      
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=1;i<=n;i++) arr[i]=i;
		for(int i=1;i<n;i++)swap(arr[i],arr[i+1]);
		for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
}
