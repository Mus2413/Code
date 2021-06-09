class Solution 
{
    public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    set<vector<int>>ans;
    void solve(vector<int> &A, int B,vector<int>&v,int i)
    {
        if(i==A.size() )
        {
            if(B==0)
            {
                if(v.size()>0){
                    //sort(v.begin(),v.end());
                    ans.insert(v);
                }
            }
            
            return ;
        }
        if(B==0)
        {
            //sort(v.begin(),v.end());
            ans.insert(v);
            return ;
        }
        vector<int>x=v;
        vector<int>y=v;
        if(A[i]<=B)
        {
           x.push_back(A[i]);
            solve(A,B-A[i],x,i);
        }
       // cout<<x.size()<<" "<<y.size();
       
        solve(A,B,y,i+1);
        return ;
        
        
        
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<int>v;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        solve(A,B,v,0);
        vector<vector<int>>res;
        for(auto x:ans)
        {
            res.push_back(x);
        }
        //sort(res.begin(),res.end());
        return res;
    }
};