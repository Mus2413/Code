#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int count=0,i,n=s.length(),c0=0,c1=0;
	for( i=0;i<n;i++)
	{
	    if(s[i]=='0')
	    c0++;
	    if(s[i]=='1')
	    c1++;
	    if(c0==c1)
	    count++;
	}
	
	cout<<count<<endl;
	return 0;
}