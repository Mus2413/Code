#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    unordered_set<string> set_string;
    
    s.push_back(' ');
    int n=s.length();
    string temp;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            temp.push_back(s[i]);
        }
        else
        {
            set_string.insert(temp);
            temp.clear();
        }
    }
    unordered_map<string,vector<string>> mp;
    for(auto x: set_string)
    {
        string temp=x;
        sort(temp.begin(),temp.end());
        mp[temp].push_back(x);
    }
    for(auto x:mp)
    {
        if(x.second.size()>1)
        {
            for(int i=0;i<x.second.size();i++)
            {
                cout<<x.second[i]<<" ";
            }
            cout<<endl;
        }
    }
    
	return 0;
}