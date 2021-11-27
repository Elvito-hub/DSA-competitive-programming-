//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/a-new-experiment/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int count_one(ll n)
{
	int count=0;
	while(n)
	{
		//reduce number of 1s in binary represataion
		n=n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count_one(n)<<endl;
	}
}
