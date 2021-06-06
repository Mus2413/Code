class Solution{
public:
 vector<string>ans;
 void solve(int n,  vector<string>& dict, string s,int i,string temp)
 {
     if(i==n)
     {
         ans.push_back(temp);
         return ;
     }
     //cout<<"temp- "<<temp<<endl;
    
     string z="";
     
     for(int j=i;j<n;j++)
     {
         z.push_back(s[j]);
        // cout<<z<<endl;
         if(find(dict.begin(),dict.end(),z) != dict.end())
         {
             string x=temp;
             if(i>0){
     
              x.append(" ");
              }
             x.append(z);
             solve(n,dict,s,j+1,x);
         }
     }
     return ;
 }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
       
       
        solve(s.length(),dict,s,0,"");
        
        return ans;
    }
};
