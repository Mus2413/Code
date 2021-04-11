class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int count=0,ans=0;
        int i=0,j=0,n=nums.size();
        bool visited[n];
        memset(visited,false,sizeof(visited));
        
        while(i<n)
        {
            if(visited[i]==false && nums[i]%2!=0)
            {
                visited[i]=true;
                count++;
            }
            if(count<k)
                i++;
            else if(count==k)
            {
                ans++;
                int x=j;
                while(nums[x]%2==0 &&x<i)
                {
                    ans++;
                    x++;
                }
                i++;
                
            }
            else if(count>k)
            {
               if(j<i && nums[j]%2!=0 )
                  count--;
               j++;
            }
            
        }
        return ans;
        
    }
};