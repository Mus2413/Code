class Solution {
private:
public:
	int minSwaps(vector<int>&nums){
	  vector<pair<int,int>>v;
	  int n=nums.size();
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({nums[i],i});
	    }
	    sort(v.begin(),v.end());
	    
	    int ans=0;
	    bool visited[n];
	    memset(visited,false,sizeof(visited));
	    for(int i=0;i<n;i++)
	    {
	        int x=i,count=0;
	        while(visited[x]==false)
	        {
	            visited[x]=true;
	            count++;
	            x=v[x].second;
	        }
	        if(count>0)
	        ans+=count-1;
	    }
	    return ans;
	}
};