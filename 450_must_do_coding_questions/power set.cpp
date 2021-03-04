 void solve(string s,vector<string> &ans,string out)
	    {
	        if(s.length()==0)
	        {
	            if(out.length()!=0)
	            {
	                ans.push_back(out);
	            }
	            return ;
	        }
	        string a,b;
	        a=out;
	        b=out;
	        b.push_back(s[0]);
	        s.erase(s.begin()+0);
	        solve(s,ans,a);
	        solve(s,ans,b);
	        return ;
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    string out="";
		    solve(s,ans,out);
		    sort(ans.begin(),ans.end());
		    return ans;
		} 