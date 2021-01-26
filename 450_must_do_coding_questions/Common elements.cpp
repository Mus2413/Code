class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int,int> mp;
            mp[A[0]]++;
            for(int i=1;i<n1;i++)
            {
                if(A[i]!=A[i-1])
                {
                    mp[A[i]]++;
                }
            }
             mp[B[0]]++;
            for(int i=1;i<n2;i++)
            {
                if(B[i]!=B[i-1])
                {
                    mp[B[i]]++;
                }
            }
             mp[C[0]]++;
            for(int i=1;i<n3;i++)
            {
                if(C[i]!=C[i-1])
                {
                    mp[C[i]]++;
                }
            }
            vector<int> ans;
            for(auto i:mp)
            {
                if(i.second>=3)
                {
                    ans.push_back(i.first);
                }
            }
            sort(ans.begin(),ans.end());
            return ans;
            
        }

};