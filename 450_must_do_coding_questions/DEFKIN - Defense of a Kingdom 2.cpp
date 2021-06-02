#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		ll r,c,q;
		cin>>r>>c>>q;
		int row[q+2];
		int col[q+2];
		int i=0;
		while(i<q)
		{
		    cin>>row[i];
		    row[i]--;
		   
		    cin>>col[i];
		    col[i]--;
		    
		    i++;
		}
		row[q]=0;
		col[q]=0;
		row[q+1]=r-1;
		col[q+1]=c-1;
	
		sort(row, row+q+2);
		sort(col,col+q+2);
	
		int start=0,ans=0;
		for(int i=1;i<q+2;i++)
		{
		    start=col[i]-start;
		    int rowst=0;
		    for(int j=1;j<q+2;j++)
		    {
		        rowst=row[j]-rowst;
		        //cout<<rowst*start<<" ";
		        ans=max(rowst*start, ans);
		        rowst=row[j]+1;
		    }
		    start=col[i]+1;
		}
		cout<<endl;
		cout<<ans<<endl;
	}
	return 0;
}