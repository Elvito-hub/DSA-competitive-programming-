/////////////CHINESE REMAINDER THEOREM///////////////


////It states that given 2 arrays num[0...k-1] and rem[0...k-1]. and in num[0...k-1] every pair
////is coprime(gcd for every pair is 1). we need to find minimum positive nbr x such that.

 //   x % num[0]    =  rem[0], 
 //   x % num[1]    =  rem[1], 
 //   .......................
 //   x % num[k-1]  =  rem[k-1]
 
 
// EG num[]={5,7}, rem[]={1,3} output:31;






/////////////NAIVE APPROACH TO FIND X///////////////

//start with 1 increment one by one check if dividing it with elts in num[] produces remainders rem[]


//#include<bits/stdc++.h>
//using namespace std;
//
//int findMinX(int num[],int rem[],int k)
//{
//	int x=1;
//	while(true)
//	{
//		int j;
//		for(j=0;j<k;j++)
//		   if(x%num[j]!=rem[j]) break;
//		   
//		if(j==k) return x;
//		
//		x++;
//	}
//	return x;
//}
//int main(){
//	int num[]={3, 4, 5};
//	int rem[]={2, 3, 1};
//	int k=sizeof(num)/sizeof(num[0]);
//	
//	cout<<"X is "<<findMinX(num, rem, k);
//	return 0;
//}


/////////////METHOD 2: INVERSE MODULO BASED//////////////////////////

////x =  ( SUMATION OF (rem[i]*pp[i]*inv[i]) ) % prod //////  Where 0 <= i <= n-1

//rem[i] is given array of remainders
//prod is product of all given numbers  prod = num[0] * num[1] * ... * num[k-1]
//pp[i] is product of all divided by num[i]  Where pp[i] = prod / num[i]
// inv[i] = Modular Multiplicative Inverse of pp[i] with respect to num[i]



#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int *x,int *y)
{
	if(a==0)
	{
		*x=0,*y=1;
		return b;
	}
	int x1,y1;
	int g= gcd(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	
	return g;
}
int inv(int a, int m)
{
	int x,y;
	gcd(a,m,&x,&y);
	
	int res= (x%m+m)%m;
	return res;
}
int findMinX(int num[],int rem[], int k)
{
	//compute prod
	int prod=1;
	for(int i=0;i<k;i++)
	    prod*=num[i];
	    
	int result=0;
	
	//compute pp[i] and then call inverse of pp[i] and num[i]
	for(int i=0;i<k;i++)
	{
		int pp=prod / num[i];
		result+= rem[i] * inv(pp, num[i]) * pp;
	}
	return result % prod;
}
int main()
{
	int num[]={3, 4, 5};
	int rem[]={2, 3, 1};
	int k=sizeof(num)/sizeof(num[0]);
	cout<<"x is "<<findMinX(num, rem, k);
}
