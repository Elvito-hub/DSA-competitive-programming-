#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200005;
const int INF = 1000000000;
bool sieve[MAXN];
vector <int> fact[MAXN];
int A[MAXN], ans[MAXN], last_occ[MAXN];
int main()
{
	for (int i = 2; i < MAXN; ++i)
	{
		if(!sieve[i])
		{
			for (int j = i; j < MAXN; j+=i)
			{
				sieve[j] = true;
				fact[j].push_back(i);
			}
		}
	}
	
	
	
	int n;
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		cin>>A[i];
	}
	for (int i = 0; i < MAXN; ++i)
	{
		last_occ[i] = -INF;
	}
	for (int i = 1; i <= n; ++i)
	{
		int curr = -INF;
		for (int j = 0; j < fact[A[i]].size(); ++j)
		{
			curr = max(curr,last_occ[fact[A[i]][j]]);
			last_occ[fact[A[i]][j]] = i;
		}
		ans[i] = curr;
	}
	for (int i = 0; i < MAXN; ++i)
	{
		last_occ[i] = INF;
	}
	for (int i = n; i >= 1; --i)
	{
		int curr = INF;
		for (int j = 0; j < fact[A[i]].size(); ++j)
		{
			curr = min(curr,last_occ[fact[A[i]][j]]);
			last_occ[fact[A[i]][j]] = i;
		}
		if(abs(curr - i) < abs(ans[i] - i))
			ans[i] = curr;
	}
	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", ((abs(ans[i]) < INF)?ans[i]:-1));
	}
	return 0;
}

