#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=0,r=0,u=0,d=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='L')
				l++;
			else if(s[i]=='R')
				r++;
			else if(s[i]=='U')
				u++;
			else
				d++;
		}
		l=r=min(l,r);
		u=d=min(u,d);
		if(l==0 && u!=0)
		{
			cout<<"2"<<endl;
			cout<<"UD"<<endl;
		}
		else if(u==0 && l!=0)
		{
			cout<<"2"<<endl;
			cout<<"LR"<<endl;
		}
		else if(l==0 && u==0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<2*(l+u)<<endl;
			while(l>0)
			{
				cout<<"L";
				l--;
			}
			while(u>0)
			{
				cout<<"U";
				u--;
			}
			while(r>0)
			{
				cout<<"R";
				r--;
			}
			while(d>0)
			{
				cout<<"D";
				d--;
			}
			cout<<endl;
		}
	}
}