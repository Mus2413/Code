#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool anc=false,cw=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='<')
            cw=true;
            if(s[i]=='>')
            anc=true;
        }
        
        if(anc && cw)
        {
            int ans=0;
            s+=s[0];
            for(int i=0;i<n;i++)
            {
                if(s[i]=='-' || s[i+1] =='-')
                ans++;
            }
            cout<<ans<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
}