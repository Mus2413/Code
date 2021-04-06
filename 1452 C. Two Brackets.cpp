#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    long long int open1=0,close1=0,open2=0,close2=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='(')
	        open1++;
	        else if(s[i]==')')
	        close1++;
	        else if(s[i]=='[')
	        open2++;
	        else if(s[i]==']')
	        close2++;
	        
	        if(close2>open2)
	        close2=open2;
	        
	        if(close1>open1)
	        close1=open1;
	    }
	    open1=min(open1,close1);
	    open2=min(open2,close2);
	    cout<<open1+open2<<endl;
	}
	return 0;
}