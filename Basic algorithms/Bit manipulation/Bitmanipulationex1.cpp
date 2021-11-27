////////How to check if a given number is a power of 2///////////////



// How to check it normally



//#include<bits/stdc++.h>
//using namespace std;
// bool isPowerOfTwo(int x)
//    {
//        if(x == 0)
//            return false;
//        else
//        {
//            while(x % 2 == 0) x /= 2;
//            return (x == 1);
//            }
//    }
//int main()
//{
//	int x;
//	cin>>x;
//	cout<<isPowerOfTwo(x);
//}




//Using bit manipulation x is power of 2 if x&(x-1) will be 0.

#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int x)
{
	// x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
	return (x &&!(x&(x-1)));
}
int main()
{
	int x;
	cin>>x;
	isPowerOfTwo(x)?cout<<"Yes \n":cout<<"No \n";
}
