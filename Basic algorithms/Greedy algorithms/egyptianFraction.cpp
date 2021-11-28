////////////////// Egyptian Fraction ////////////

//Egyptian Fraction Representation of 6/14 is 1/3 + 1/11 + 1/231


#include<bits/stdc++.h>
using namespace std;

void printEgyptian(int nr,int dr)
{
	if(dr==0||nr==0)
			return;
		//If numerator divides denominator (ex:2/4)
	if(dr%nr==0)
	{
		cout<<"1/"<<dr/nr;
		return;
	}
	//If denominator divides numerator (ex:4/2) 
	if(nr%dr==0)
	{
		cout<<nr/dr;
		return;
	}
	//If numerator is greater than denominator
	if(nr>dr)
	{
		cout<<nr/dr<<" + ";
		printEgyptian(nr%dr,dr);
		return;
	}
	//then if dr>nr and dr%nr is non zero
	//Find ceiling of dr/nr and print it as first
	//fraction
	int n= dr/nr+1;
	cout<<"1/"<<n<<" + ";
	
	//recur for remaining part
	printEgyptian(nr*n-dr,dr*n);
}
int main()
{
	int nr=6,dr=14;
    cout << "Egyptian Fraction Representation of "
         << nr << "/" << dr << " is\n ";
    printEgyptian(nr, dr);
    return 0;
}


