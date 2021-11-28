#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	set<char> c;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='z') c.insert(s[i]);
	}
	cout<<c.size()<<"\n";
}
