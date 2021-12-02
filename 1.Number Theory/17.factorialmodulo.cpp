/////////////COMPUTE N! UNDER MODULO P/////////////////////

/////1.SIMPLE METHOD////////


//#include<bits/stdc++.h>
//using namespace std;
//int modFact(int n,int p){
//	if(n>=p) return 0;
//	
//	int res=1;
//	for(int i=1;i<=n;i++)
//	    res=(res*i)%p;
//	    
//	return res;
//}
//int main()
//{
//	int n,p;
//	cin>>n>>p;
//	cout<<n<<"! = "<<modFact(n,p)<<"(mod "<<p<<")";
//	return 0;
//}



//////2.WILSON'S THEOREM///////

/////Wilson theorem states that a nbr p>1 is a prime nbr if///////
////(p-1)!=-1 mod p//////or//////(p-1)!=(p-1) mod p///////////

/////This method is useful when p is close to n//////Eg: (25!%29) from wilson theorem/////
//// we know 28!=-1 or 28!=28-1  so we basically need to find [(-1)*inv(28,29)*inv(27*29)*inv(26)]%29////

#include<bits/stdc++.h>
using namespace std;


int power(int x,unsigned int y,int p)
{
	int res=1;
	x=x%p;
	while(y>0){
		if(y&1) res=(res*x)%p;
		
		y=y>>1;
		x=(x*x)%p;
	}
	
	return res;
}



//using fermat's method
int modInverse(int a,int p)
{
	return power(a,p-2,p);
}
int modFact(int n,int p)
{
	//n!%p is 0 if n>=p
	if(n>=p) return 0;
	
	
	int res= (p-1);
	for(int i=n+1;i<p;i++)
	    res=(res*modInverse(i,p))%p;
	    
	return res;
	
}
int main(){
	int n,p;
	cin>>n>>p;
	cout<<n<<"! = "<<modFact(n,p)<<"(mod "<<p<<")";
	return 0;
}
