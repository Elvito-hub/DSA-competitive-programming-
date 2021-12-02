//https://codeforces.com/problemset/problem/1326/A


//If n=1, no solution exists.

//Otherwise, if n=2, the number 233…3 (n digits) satisfies all conditions, because it is not divisible by 2 and 3.
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "-1\n";
        return;
    }
    cout << "2";
    for (int i = 0; i < n - 1; i++)
        cout << "3";
    cout << "\n";
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
