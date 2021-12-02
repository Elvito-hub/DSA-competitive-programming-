//https://codeforces.com/problemset/problem/1107/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    
   // The key observation is that the digital root
//of an integer k is the single-digit number 1 = d = 9 such that .
    while(n--)
    {
    	long long k;
    	int x;
    	cin>>k>>x;
    	cout<<9*(k-1)+x<<"\n";
	}
}
