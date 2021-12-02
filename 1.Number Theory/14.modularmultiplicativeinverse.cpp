
//////////////////NAIVE APPROACH//////////////


//#include<bits/stdc++.h>
//using namespace std;
//int modInverse(int a,int m)
//{
//	for(int x=1;x<m;x++)
//	   if(((a%m)*(x%m))%m==1)
//	     return x;
//}
//int main(){
//	int a=3,m=11;
//	cout<<modInverse(a,m);
//	return 0;
//}



//////////////Method 2(works when m and a are coprime)///////////////


//we use extended Euclidean algorith as we know ax + by = gcd(a, b)  now b=m  ax + my = 1

//if we take modulo on both sides ax + my =` 1 (mod m)

//we can remove my as my(mod m) would always be 0 then we get ax  = 1 (mod m)

//so the x that we find from our extended Euclidean algorithm is the multiplicative inverse of a

//#include<bits/stdc++.h>
//using namespace std;
//int gcdExtended(int a,int b,int *x,int *y);
//void modInverse(int a,int m){
//	int x,y;
//	int g=gcdExtended(a,m,&x,&y);
//	if(g!=1) cout<<"Inverse doesn't exist";
//	else{
//		int res=(x%m+m)%m;
//		cout<<"Modular multiplicative inverse is : "<<res;
//	}
//}
//int gcdExtended(int a,int b,int *x,int *y)
//{
//	if(a==0){
//		*x=0,*y=1;
//		return b;
//	}
//	int x1,y1;
//	int gcd=gcdExtended(b%a,a,&x1,&y1);
//	*x=y1-(b/a)*x1;
//	*y=x1;
//	return gcd;
//	
//}
//int main()
//{
//	int a=3,m=11;
//	modInverse(a,m);
//	return 0;
//}










/////////////////////Method 3(works when m is prime)///////////////
///////////we use fermats's little theorem///////////////////

//if m is a prime number then a^m-1 =` 1 (mod m)

//if we multiply both sides by a^-1 we get a^-1 =` a^m-2 (mod m)


#include <iostream>
using namespace std;
 
// To find GCD of a and b
int gcd(int a, int b);
 
// To compute x raised to power y under modulo m
int power(int x, unsigned int y, unsigned int m);
 
// Function to find modular inverse of a under modulo m
// Assumption: m is prime
void modInverse(int a, int m)
{
    int g = gcd(a, m);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // If a and m are relatively prime, then modulo
        // inverse is a^(m-2) mode m
        cout << "Modular multiplicative inverse is "
             << power(a, m - 2, m);
    }
}
 
// To compute x^y under modulo m
int power(int x, unsigned int y, unsigned int m)
{
    if (y == 0)
        return 1;
    int p = power(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}
 
// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Driver code
int main()
{
    int a = 3, m = 11;
 
    // Function call
    modInverse(a, m);
    return 0;
}

















