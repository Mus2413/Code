class Solution{
    public:
        vector <int> max_of_subarrays(int *arr, int n, int k){
        {
            int maxele=INT_MIN;
            vector<int>ans;
            if(n<k)
            return ans;
            int i=0,j=0;
            deque<int>q;
            while(i<n)
            {
                
                
                    while(!q.empty() && q.back()<arr[i])
                    {
                        q.pop_back();
                    }
                   
                maxele=max(maxele,arr[i]);
                 q.push_back(arr[i]);
                if(i-j+1==k)
                {
                    ans.push_back(maxele);
                    if(arr[j]==q.front())
                    {
                        q.pop_front();
                        if(!q.empty())
                        maxele=q.front();
                        else
                        maxele=INT_MIN;
                        
                    }
                    j++;
                }
                i++;
            }
            return ans;
        }
    }
};
