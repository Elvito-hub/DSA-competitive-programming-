///////////////Form N by adding 1 or 2 in minimum number of operations X where X is divisible by M////

//eg N=10,M=2// X=6


//As we can only add 2 or 1, minimum no. of steps taken is n/2, and the maximum no. of steps is n

//Now if n is even then a minimum number of steps will be n/2 but if it is odd, then it will be n/2+1

///!!To make minimum steps of a multiple of m we can do floor((minumum_steps + m – 1)/m) * m

#include <bits/stdc++.h> 
using namespace std; 
  
// Function to calculate the minimum number of steps required 
// total steps taken is divisible 
// by m and only 1 or 2 steps can be taken at // a time 
int minsteps(int n, int m) 
{ 
  
    // If m > n ans is -1 
    if (m > n) { 
        return -1; 
    } 
    // else discussed above approach 
    else { 
        return ((n + 1) / 2 + m - 1) / m * m; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int n , m;
	cin>>n>>m; 
    int ans = minsteps(n, m); 
    cout << ans << '\n'; 
  
    return 0; 
}


