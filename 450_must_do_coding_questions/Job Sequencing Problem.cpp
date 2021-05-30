/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a,Job b)
    {
        if(a.profit==b.profit)
        {
            return a.dead<b.dead;
        }
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int maxslot=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            maxslot=max(maxslot,arr[i].dead);
        }
        sort(arr,arr+n,comp);
        int slot[maxslot+1];
        memset(slot,-1,sizeof(slot));
        int countprofit=0,count=0;
        for(int i=0;i<n;i++)
        {
            int x=arr[i].profit;
            int y=arr[i].dead;
            int j=y;
            while(j>0)
            {
                if(slot[j]==-1)
                {
                    slot[j]=1;
                    countprofit+=x;
                    count++;
                    break;
                }
                j--;
            }
        }
        ans.push_back(count);
        ans.push_back(countprofit);
        return ans;
    } 
    
};