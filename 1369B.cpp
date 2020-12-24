#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        string s,a;
        cin>>s;
        a=s;
        sort(a.begin(),a.end());
        if(a.compare(s)==0)
        {
            cout<<a<<endl;
        }
        else
        {
            long long int i=0;
            while(s[i]!='1')
            {
                i++;
            }
            i++;
            long long int j=s.length()-1,count=0;
            while(s[j]!='0')
            {
                j--;
                count++;
            }
            while(i>0)
            {
                cout<<"0";
                i--;
            }
            while(count>0)
            {
                cout<<"1";
                count--;
            }
            cout<<endl;
        }
    }
}