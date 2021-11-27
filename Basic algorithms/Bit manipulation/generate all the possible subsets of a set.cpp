///////////How to generate all the possible subsets of a set//////////

//Eg A={a,b,c}
//we need 3 bits,one bit for each elt.

//subsets are:

//0 = (000)2 = {}
//1 = (001)2 = {a}
//2 = (010)2 = {b}
//3 = (011)2 = {b, c}
//4 = (100)2 = {c}
//5 = (101)2 = {a, c}
//6 = (110)2 = {a, b}
//7 = (111)2 = {a, b, c}

#include<bits/stdc++.h>
using namespace std;
void possibleSubsets(char A[],int N)
{
	int counter=0;
	//as we know subsets=2^n;  1<<N=2^n'
	//the length of a subset is the number of ones present in i
	for(int i=0;i<(1<<N);++i)
	{
		for(int j=0;j<N;++j)
		{
			if(i&(1<<j)){
				counter++;
			   cout<<i<<" "<<j<<" "<<A[j]<<" ";
		}
		}
		cout<<endl;
	}
	cout<<counter<<endl;
}
int main()
{
	char c[]={'a','b','c'};
	possibleSubsets(c,3);
}
