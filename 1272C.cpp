#include <bits/stdc++.h>
using namespace std;

int main() {
	
    long long int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_set<char> st;
    for(int i=0;i<k;i++)
    {
        char x;
        cin>>x;
        st.insert(x);
    }
    long long int count=0,l=0,r=0;
    for(int i=0;i<n;i++)
    {
        if(st.find(s[i])==st.end())
        {
            int x=r-l;
            count=count + x*1ll *(x+1)/2;
            l=0;
            r=0;
        }
        else
        {
            r++;
        }
    }
    int x=r-l;
    count=count + x*1ll *(x+1)/2;
    cout<<count<<endl;
    
	return 0;
}