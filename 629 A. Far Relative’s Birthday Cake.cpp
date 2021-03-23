#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char a[n][n];
    long long int cnt=0,ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C')
            cnt++;
        }
        ans+=(cnt-1)*cnt/2;
        cnt=0;
    }
    cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='C')
            cnt++;
        }
        ans+=(cnt-1)*cnt/2;
        cnt=0;
    }
    cout<<ans<<endl;
	return 0;
}