////////////////////CAKE distribution provblem//////////////////////
//Given two integers N and M,
// where N is the number of friends sitting in a clockwise manner in a circle and
// M is the number of cakes. 
//The task is to calculate the left number of cakes after distributing i cakes to i’th friend.
//EG: N = 4, M = 11  Output: 0,,Input: N = 3, M = 8  Output: 1



#include<bits/stdc++.h>
using namespace std;

// Function to return the  
// remaining count of cakes  
int cntCakes(int n, int m) 
{  
  
    // Sum for 1 cycle  
    int sum = (n * (n + 1)) / 2; 
  
    // no. of full cycle and remainder  
    int quo = m/sum ; 
    int rem = m % sum ; 
    double ans = m - quo * sum ; 
    
    //solving for x from remainder = x * (x + 1) / 2
    int x = (-1 + pow((8 * rem) + 1, 0.5)) / 2; 
      
    ans = ans - x * (x + 1) / 2; 
  
    return int(ans); 
}
int main()
{
    int n,m;
	cin>>n>>m;  
    int ans = cntCakes(n, m); 
    cout << (ans);
}
