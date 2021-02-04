#include <bits/stdc++.h> 
using namespace std; 
void permute(string a, int l, int r,vector<string>&v) 
{ 

	if (l == r) 
		v.push_back(a);
	else
	{ 
	
		for (int i = l; i <= r; i++) 
		{ 
			swap(a[l], a[i]); 
			permute(a, l+1, r,v); 
			swap(a[l], a[i]); 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
	string str;
	cin>>str;
	int n = str.size(); 
		vector<string>v;
	permute(str, 0, n-1,v);

	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
    }
	return 0; 
} 


