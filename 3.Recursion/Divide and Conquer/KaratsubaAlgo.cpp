#include<bits/stdc++.h>
using namespace std;

int makeEqualLength(string &str1, string &str2)
{
	int len1 = str1.size();
	int len2 = str2.size();
	if(len1 < len2)
	{
		for(int i=0;i<len2-len1;i++)
			str1= '0'+str1;
		return len2;
	}
	else if(len1 > len2)
	{
		for(int i=0;i<len1-len2;i++)
			str2='0'+str2;
	}
	return len1;	//IF len1>=len2
}
// The main function that adds two bit sequences and returns the addition
string addBitStrings(string first, string second)
{
	string result; //to store the sum
	// make the lengths same before adding
	int length = makeEqualLength(first,second);
	int carry = 0; //Initialize carry
	
	//Add all bits one by one
	for(int i=length-1; i>=0; i--)
	{
		int firstBit = first.at(i) - '0';
		int secondBit = second.at(i) - '0';
		
		//Boolean expression for sum of 3 bits
		int sum = (firstBit^secondBit^carry)+'0';
		
		result = char(sum)+result;
		//Boolean expression for 3-bit addition
		carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry);
	}
	//if overFlow, then add a leading 1
	if(carry) result='1'+result;
	return result;
}
int multiplyiSingleBit(string a,string b)
{
	return (a[0]-'0')*(b[0]-'0');	
}             
long int multiply(string X,string Y)
{
	// Find the maximum of lengths of x and Y and make length
    // of smaller string same as that of larger string
	int n = makeEqualLength(X,Y);
	
	//Base cases
	if(n == 0) return 0;
	if(n == 1) return multiplyiSingleBit(X, Y);
	
	int fh = n/2;		//first half
	int sh = (n-fh);	//second half
	
	//The 2 halves of X
	string Xl = X.substr(0, fh);
	string Xr = X.substr(fh, sh);
	
	//The 2 halves of X
	string Yl = Y.substr(0, fh);
	string Yr = Y.substr(fh, sh);
	
	// Recursively calculate the three products of inputs of size n/2
	long int P1 = multiply(Xl, Yl);
	long int P2 = multiply(Xr, Yr);
	long int P3 = multiply(addBitStrings(Xl,Xr), addBitStrings(Yl,Yr));
		
	// Combine the three products to get the final result.
	return P1*(1<<(2*sh))+(P3-P1-P2)*(1<<sh)+P2;	
}  
int main()
{
	printf ("%ld\n", multiply("1100", "1010"));
    printf ("%ld\n", multiply("110", "1010"));
    printf ("%ld\n", multiply("11", "1010"));
    printf ("%ld\n", multiply("1", "1010"));
    printf ("%ld\n", multiply("0", "1010"));
    printf ("%ld\n", multiply("111", "111"));
    printf ("%ld\n", multiply("11", "11"));
}
