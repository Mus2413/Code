#include<bits/stdc++.h>
using namespace std;
int timest=0;
void dfs(vector<vector<int>>adj,int src,vector<bool>&visited,vector<int>&start,vector<int>&end)
{
    visited[src]=true;
    start[src]=++timest;
    for(auto x:adj[src])
    {
        if(!visited[x])
        {
            dfs(adj,x,visited,start,end);
        }
    }
    end[src]=++timest;
    return;
}
bool subtree(int x,int y,vector<int>start,vector<int>end)
{
    if(start[x]>start[y] && end[x]<end[y])
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    int m=n-1;
    int i=0;
    vector<vector<int>>adj(n+1);
    while(i<m)
    {
        i++;
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        
        
    }
    vector<bool>visited(n+1);
    for(int i=0;i<=n;i++)
    {
        visited[i]=false;
    }
     timest=0;
    vector<int>start(n+1),end(n+1);
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs(adj,i,visited,start,end);
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,x,y;
        cin>>a>>x>>y;
        if(!subtree(x,y,start,end) && ! subtree(y,x,start,end))
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(a==0)
        {
            if(subtree(y,x,start,end))
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        else
        {
            if(subtree(x,y,start,end))
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
    }
    
}