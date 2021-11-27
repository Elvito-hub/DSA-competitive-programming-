//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/danny-and-his-loneliness/

//In a given array of nbrs, show the one element which appear odd times of nbr;


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[2*n+1],count=0;
	for(int i=0;i<2*n+1;i++)
	  {
	  	cin>>a[i];
	  	count^=a[i];
	  }
	  cout<<count<<"\n";
}
