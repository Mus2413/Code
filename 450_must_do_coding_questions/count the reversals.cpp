#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(!st.empty()&& st.top()=='{' && s[i]=='}')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        if(st.size()==0)
        {
            cout<<"0"<<endl;
        }
        else if(st.size()%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            string temp;
            while(!st.empty())
            {
                temp.push_back(st.top());
                st.pop();
            }
            reverse(temp.begin(),temp.end());
            int count=0;
            for(int i=0;i<temp.size()-1;i++)
            {
                if(temp[i]=='{' && temp[i+1]=='{')
                {
                    count++;
                    i++;
                }
                else if(temp[i]=='}' && temp[i+1]=='}')
                {
                    count++;
                    i++;
                }
                else if(temp[i]=='{' && temp[i+1]=='}')
                {
                    i++;
                }
                else if(temp[i]=='}' && temp[i+1]=='{')
                {
                    count+=2;
                    i++;
                }
            }
            cout<<count<<endl;
        }
    }
    
	return 0;
}