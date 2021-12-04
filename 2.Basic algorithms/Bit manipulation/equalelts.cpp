//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/equal-elements-2-db70c1ae/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,odd=0,even=0;
		cin>>n;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x&1) odd++;
			else	even++;
		}
		if(odd<even)cout<<odd<<endl;
		else	cout<<even<<endl;
	}
}
