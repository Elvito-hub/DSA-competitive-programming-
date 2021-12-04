//////Find the largest power of 2, which is less than or equal to n////////

///STEP 1: Change all bits to 1 to make y
///STEP 2: calculate (y+1)/2 or (y+1)>>1;

//Eg: 11=1011(b2) change all bits to 1 makes 1111(15) (15+1)/2=8

////How to change all bits to 1///

#include<bits/stdc++.h>
using namespace std;

long largest_power(long N)
    {
        //changing all right side bits to 1.
        N = N| (N>>1);
        N = N| (N>>2);
        N = N| (N>>4);
        N = N| (N>>8);


    //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by
                return (N+1)>>1;

    }
    
int main()
{
	long n;
	cin>>n;
	cout<<largest_power(n);
}
