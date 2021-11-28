//https://codeforces.com/problemset/problem/1430/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end() 
ll n;  
inline void read() {	
	cin >> n;
}

inline void solve() {
	if (n == 1 || n == 2 || n == 4) {
		cout << -1 << endl;
		return;
	}
	if (n % 3 == 0) {
		cout << n / 3 << ' ' << 0 << ' ' << 0 << endl;
	} else if (n % 3 == 1) {
		cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << endl;
	} else {
		cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << endl;
	}
}

int main () {
#ifdef fcspartakm
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    cerr << setprecision(10) << fixed;
    
    int t; cin >> t;
    while(t--) {
    	read();
    	solve();
    }
 
    //cerr << "TIME: " << clock() << endl;
}
