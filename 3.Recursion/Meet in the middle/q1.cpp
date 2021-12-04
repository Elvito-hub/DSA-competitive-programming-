#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll X[2000005],Y[2000005];

//Find all possible sum of elements of a[]
//and store in x[]
void calcsubarray(ll a[],ll x[],int n,int c)
{
	for(int i=0;i<(1<<n);i++)
	{
		ll s=0;
		for(int j=0;j<n;j++)
			if(i & (1<<j))
				s+=a[j+c];
		x[i]=s;
	}
}

ll solveSubsetSum(ll a[],int n,ll S)
{
	//Compute all subset sums of first and second
	//halves
	calcsubarray(a,X,n/2,0);
	calcsubarray(a,Y,n-n/2,n/2);
	
	int size_X= 1<<(n/2);
	int size_Y= 1<<(n-n/2);
	
	//sort Y(we need to do binary search in it)
	sort(Y,Y+size_Y);
	
	ll max=0;
	for(int i=0;i<size_X;i++)
	{
		if(X[i]<=S)
		{
			//lower_bound returns the first address
			//which has value greater than or equal to
			//S-X[i]
			int p= lower_bound(Y,Y+size_Y,S-X[i]) - Y;
			//If S-X[i] was sot in array Y then decrease
			//p by 1
			if(p==size_Y || Y[p] != (S-X[i]))
				p--;
			if((Y[p]+X[i]) > max)
				max = Y[p]+X[i];
		}
	}
	return max;
}
int main()
{
	ll a[] = {3, 34, 4, 12, 5, 2};
    int n=sizeof(a)/sizeof(a[0]);
    ll S = 10;
    printf("Largest value smaller than or equal to given "
           "sum is %lld\n", solveSubsetSum(a,n,S));
    return 0;
}
