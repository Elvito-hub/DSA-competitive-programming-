#include<bits/stdc++.h>
using namespace std;

void primeFactors(int n){
	//step 1 take care of composite numbers divisible by 2(take the even number and change it)
	while(n%2==0){
	cout<<2<<" ";
    n/=2;
  }
  //step 2 take care of composite numbers which are odd
  //Every composite number has at least one prime factor less than or equal to square root of itself.
  //This property can be proved using counter statement. Let a and b be two factors of n such that a*b = n.
  // If both are greater than vn, then a.b > vn, * vn,
  // which contradicts the expression “a * b = n”.
    for(int i=3;i<=sqrt(n);i+=2){
    	while(n%i==0){
    		cout<<i<<" ";
    		n/=i;
		}
	}
	if(n>2){
		cout<<n<<" ";
	}
  }
int main(){
	int n;
	cin>>n;
	primeFactors(n);
}
