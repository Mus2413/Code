#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0,sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0 && s[i]=='0')
            {
                cnt++;
            }
            if(i%2!=0 && s[i]=='1')
            cnt++;
            if(i%2==0 && s[i]=='1')
            sum++;
            if(i%2!=0 && s[i]=='0')
            sum++;
        }
        cout<<min(sum,cnt)<<endl;
        
	
	
	
	}
	return 0;
}