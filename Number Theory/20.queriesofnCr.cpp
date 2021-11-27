
////////////////CALCULATING queries of nCr in O(1) time///////////
 
////A naive approach is to calculate nCr using formulae by applying modular operations
////Which will make our Time complexity O(q*n)

//////////////A better approach is to use fermat little theorem ////

//As we know nCr is (n!/(r!*(n-r)!) ) mod p Can also be (n!*inverse(r!)*inverse((n-r)!) ) mod p
//So we will need to precompute n! from 1 to n
// Also it is better to precompute inverse of 1 to N
//n! = n * (n-1) ! taking inverse on both sides
//inverse( n! ) = inverse( n ) * inverse( (n-1)! )




#include<bits/stdc++.h>
#define ll long long
const int N=1000001;
using namespace std;

ll factorialNumInverse[N+1];
ll naturalNumInverse[N+1];

ll fact[N+1];

//function to precompute inverse of numbers
void InverseofNumber( ll p)
{
	naturalNumInverse[0] = naturalNumInverse[1] = 1;
	for(int i=2;i<=N;i++)
	  naturalNumInverse[i]= naturalNumInverse[p%i]*(p-p/i)%p;
}

//func to compute inverse of factorials inverse( n! ) = inverse( n ) * inverse( (n-1)!
void InverseofFactorial(ll p)
{
	factorialNumInverse[0] = factorialNumInverse[1] = 1;
	for(int i=2;i<=N;i++)
	   factorialNumInverse[i]=(naturalNumInverse[i]*factorialNumInverse[i-1])%p;
	   
}

//func to compute factorial of 1 to N
void factorial(ll p)
{
	fact[0]=1;
	for(int i=1;i<=N;i++){
		fact[i]=(fact[i-1]*i)%p;
	}
}


//Func to return nCr%p in O(1)time

ll Binomial(ll N,ll R,ll p)
{
	// n C r = n!*inverse(r!)*inverse((n-r)!)
	ll ans=((fact[N]*factorialNumInverse[R])%p*factorialNumInverse[N-R])%p;
	
	return ans;
 } 
 
 int main()
 {
 	ll p = 1000000007;
 	InverseofNumber(p);
 	InverseofFactorial(p);
 	factorial(p);
 	
 	//1st query
 	ll N=15;
 	ll R=4;
 	
 	cout<<Binomial(N, R, p)<<endl;
 	
 	//2nd query
 	N=20;
 	R=3;
 	cout<<Binomial(N,R,p)<<endl;
 	return 0;
 }
