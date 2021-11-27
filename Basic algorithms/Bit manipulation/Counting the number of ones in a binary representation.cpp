///////////////Counting the number of ones in a binary representation of a given number///////////

//Basic approach would be diving a number by 2 till 0 and check if result is one
//It will take log2N as we divide by 2 till we get 0



// With bitwise operations, we can use an algorithm whose running time depends on
// the number of ones present in the binary form of the given number.

#include<bits/stdc++.h>
using namespace std;
int count_one(int n)
{
	int count=0;
	while(n)
	{
		//reduce number of 1s in binary represataion
		n=n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	int x;
	cin>>x;
	cout<<count_one(x);
}


