#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
        long long int a[n+1],f[2];
        f[0]=0,f[1]=0;
        for(int i = 1; i <= n; i++)
    	{
    		cin >> a[i];
    		f[(a[i] % 2)]++;
    	}
    	//cout<<f[0]<<" "<<f[1]<<endl;
    	bool flag = 0;
    	for(int i = 1; i <= f[1] && i <= x; i += 2) //Fix no of odd
    	{
    		int have = f[0], need = x - i;
    		if(need <= have)
            {
                flag = 1;
                break;
            }
    	}
    	if(flag)
    	    cout << "Yes" << endl;
    	else
    	    cout << "No" << endl;
	}
	return 0;


}