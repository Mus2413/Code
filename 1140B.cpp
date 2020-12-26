#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       string s;
		cin >> n >> s;
		int res = n - 1;
		for(int i = 0; i < n; ++i)
			if(s[i] == '>' || s[n - 1 - i] == '<')
				res = min(res, i);
		
		cout << res << endl;
	}
    
}