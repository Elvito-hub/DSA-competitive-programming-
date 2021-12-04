//https://www.geeksforgeeks.org/modify-a-numeric-string-to-a-balanced-parentheses-by-replacements/

#include<bits/stdc++.h>
using namespace std;
void balBracket(string s)
{
	int n=s.length();
	if(s[0]==s[n-1])
	{
		cout<<"No\n";
	}else{
		int cntOpen=0,cntClose=0;
		
		int check=1;
		for(int i=0;i<n;i++)
		{
			if(s[i]==s[0])
				cntOpen++;
			else if(s[i]==s[n-1])
				cntOpen--;
			else
				cntOpen++;
			if(cntOpen<0){
				check=0;
				break;
			}
		}
		if(check && cntOpen ==0){
			cout<<"Yes, ";
			for(int i=0;i<n;i++){
				if(s[i]==s[n-1])
					cout<<')';
				else
					cout<<'(';
			}
			return;
		}else{
			for(int i=0;i<n;i++)
			{
				if(s[i]==s[0])
					cntClose++;
				else
					cntClose--;
				if(cntClose<0){
					check=0;
					break;
				}
			}
			if(check && cntClose==0){
				cout<<"Yes, ";
				for(int i=0;i<n;i++)
				{
					if(s[i]==s[0])
						cout<<'(';
					else
						cout<<')';
				}
				return;
			}
		}
		cout<<"No";
	}
}
int main()
{
	string str = "123122";
	
	balBracket(str);
}
