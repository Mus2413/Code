#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int a[n][m],b[n][m],count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		    {
		    	cin>>a[i][j];
		    	if(a[i][j]==1)
		    		count++;
		    }
	memset(b,0,sizeof(b));
	if(count==0)
	{
		cout<<"0"<<endl;
	}
	else
	{
	vector<pair<int,int>> v;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			if(a[i][j]==1 && a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1)
			{
				b[i][j]=1;
				b[i+1][j]=1;
				b[i][j+1]=1;
				b[i+1][j+1]=1;
				v.push_back({i+1,j+1});
			}
		}
	}
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				flag=true;
				break;
			}
		}
	}
	if(flag)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
	}
}
}