#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
bool visited(int x,vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        return true;
    }
    return false;
}
int main() {
	int mat[2][3] = { {1, 2}, {3,4} };
    vector<int>v;
    int n=1,m=1;
    v.push_back(1);
    queue<pair<vector<int>,pair<int,int>>>q;
    
   
    q.push({v,{0,0}});
    while(!q.empty())
    {
        int x=q.front().second.first;
        int y=q.front().second.second;
        vector<int>v=q.front().first;
        q.pop();
        if(x==n && y==m)
        {
            ans.push_back(v);
        }
        if(x+1<=n && !visited(mat[x+1][y], v))
        {
            vector<int>a=v;
            a.push_back(mat[x+1][y]);
            q.push({a,{x+1,y}});
           
        }
        if(y+1<=m && !visited(mat[x][y+1],v))
        {
            vector<int>a=v;
            a.push_back(mat[x][y+1]);
            q.push({a,{x,y+1}});
           
        }
        
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}