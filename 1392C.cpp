#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int ans=0;
        long long int last=0;
        while(n--)
        {
            long long int x;
            cin>>x;
            x=x+ans;
            if(x>=last)
            {
                last=x;
            }
            else
            {
                ans+=last-x;
            }
        }
        cout<<ans<<endl;
    }
}