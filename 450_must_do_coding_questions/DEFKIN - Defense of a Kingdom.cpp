#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		ll r,c,q;
		cin>>r>>c>>q;
		
		
		bool visited[r][c];
		memset(visited,false,sizeof(visited));
		while(q--)
		{
			ll a,b;
			cin>>a>>b;
			for(ll i=0;i<c;i++)
			{
			    visited[a][i]=true;
				
			}
			for(ll i=0;i<r;i++)
			{
			    visited[i][b]=true;
				
			}
		}
		int ans=0;
	
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(visited[i][j]==false)
				{
					queue<pair<int,int>>q;
					q.push({i,j});
					int movex[]={0,0,1,-1};
					int movey[]={1,-1,0,0};
					visited[i][j]=true;
					int cost=0;
					while(!q.empty())
					{
						int x=q.front().first;
						int y=q.front().second;
						cost++;
						q.pop();
						ans=max(ans,cost);
						for(int k=0;k<4;k++)
						{
							int a=x+movex[k];
							int b=y+movey[k];
							if(a>=0 && a<r && b>=0 && b<c &&visited[a][b]==false )
							{
								q.push({a,b});
								visited[a][b]=true;
							}
						}
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}