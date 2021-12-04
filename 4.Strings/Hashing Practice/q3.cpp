// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
 
// Function that returns true if sub-string
// s[0...k] is repeated a number of times
// to generate string s
int check(string s, int k)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] != s[i % k])
            return false;
 
    return true;
}
 
// Function to return the count of common divisors
int countCommonDivisors(string a, string b)
{
    int ct = 0;
    int n = a.size(), m = b.size();
    for (int i = 1; i <= min(n, m); i++) {
 
        // If the length of the sub-string
        // divides length of both the strings
        if (n % i == 0 && m % i == 0)
 
            // If prefixes match in both the strings
            if (a.substr(0, i) == b.substr(0, i))
 
                // If both the strings can be generated
                // by repeating the current prefix
                if (check(a, i) && check(b, i))
                    ct++;
    }
    return ct;
}
 
// Driver code
int main()
{
    string a,b;
    cin>>a>>b;
 
    cout << countCommonDivisors(a, b)<<endl;
 
    return 0;
}
