#include<bits/stdc++.h>
using namespace std;
void printallsubsequences(string s,vector<int>&v,string out)
{
    if(s.length()==0)
    {
        if(out.length()!=0)
        {
            v.push_back(out);
        }
        return ;
    }
    string a=out;
    string b=out;
    b.push_back(s[0]);
    s.erase(s.begin()+0);
    printallsubsequences(s,v,a);
    printallsubsequences(s,v,b);
    return ;
}
int main()
{
    string s;
    cin>>s;
    vector<int> v;
    string out="";
    printallsubsequences(s,v,out);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}