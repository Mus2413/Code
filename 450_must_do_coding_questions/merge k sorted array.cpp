class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k;j++)
            {
                pq.push(arr[i][j]);
                
                
            }
        }
        while(pq.size()>0)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
