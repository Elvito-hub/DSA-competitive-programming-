//Euler’s Totient function F (n) for an input n is the count of numbers in {1, 2, 3, …, n}
// that are relatively prime to n,
// i.e., the numbers whose GCD (Greatest Common Divisor) with n is 1.



//naive approach(it calls gcd function 0(n) times.
//#include<bits/stdc++.h>
//using namespace std;
//int gcd(int a,int b){
//	return a%b==0?b:gcd(b,a%b);
//}
//int phi(unsigned int n){
//	unsigned int result=1;
//	for(int i=2;i<=n;i++){
//		if(gcd(i,n)==1) result++;
//	}
//	return result;
//}
//int main(){
//	int n;
//	for(n=1;n<=10;n++)
//		cout<<"phi("<<n<<") = "<<phi(n)<<endl;
//	return 0;
//	
//}


//using eurel's product formula

//#include<bits/stdc++.h>
//using namespace std;
//
//int phi(int n){
//	float result=n;
//	for(int p=2;p*p<=n;++p){
//		if(n%p==0){
//			while(n%p==0)
//			   n/=p;
//			
//			result*=(1.0-(1.0/(float)p));
//		}
//	}
//	if(n>1)
//	   result*=(1.0-(1.0/(float)n));
//	   
//	return (int)result;
//}
//int main(){
//	int n;
//	for(n=1;n<=10;n++){
//		cout<<"Phi"<<"("<<n<<") = "<<phi(n)<<endl;
//	}
//	return 0;
//}



// we can get rid of floating-point calcs (as the idea is to count all prime factors and their 
//multiples and subtract this count from n,to get the totient function value;

//#include<bits/stdc++.h>
//using namespace std;
//
//int phi(int n){
//	int result=n;
//	for(int p=2;p*p<=n;++p){
//		if(n%p==0){
//			while(n%p==0)
//			   n/=p;
//			
//			result-=result/p;
//		}
//	}
//	//while n is a prime number greater than 1
//	if(n>1)
//	   result-=result/n;
//	   
//	return result;
//}
//int main(){
//	int n;
//	for(n=1;n<=10;n++){
//		cout<<"Phi"<<"("<<n<<") = "<<phi(n)<<endl;
//	}
//	return 0;
//}














// given n find total eurel less than n



#include<bits/stdc++.h>

using namespace std;

int main()
{
    const int max=100000;
    int phi[max+1];
    //initialing phi[i] with i;
    for(int i=0;i<=max;i++)
    {
        phi[i]=i;
    }
    for(int i=2;i<=max;i++)
    {
    	//remove every prime factor from phi[i] using eurel
        if(phi[i]==i)
        for(int j=i;j<=max;j+=i)
        {
            phi[j]-=phi[j]/i;
        }
    }
    int n;
    cin>>n;
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+phi[i];
    }
    cout<<sum;
    return 0;
}







