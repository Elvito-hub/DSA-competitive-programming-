#include<bits/stdc++.h>
using namespace std;
int power(float x,int y)
{
	float res=1;
	while(y!=0){
		//if y is odd
		if(y %2!=0)
		{
			if(y>0)
		   res=res*x;
		   else
		   res=res/x;
	}
		y=y/2;//y=y/2;
		x=x*x;
	}
	return res;
}
int main(){
	float a;
	int b;
	cin>>a>>b;
	cout<<a<<"^"<<b<<"="<<power(a,b);
}
