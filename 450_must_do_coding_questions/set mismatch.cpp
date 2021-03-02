class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            if(nums[i]!=nums[nums[i]-1])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            else
            {
                i++;
            }
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
            {
                v.push_back(nums[i]);
                v.push_back(i+1);
                break;
            }
        }
        return v;
        
    }
};