class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<int,int>a ,pair<int,int>b)
    {
        int x=a.second;
        int y=b.second;
        if(x==y)
        {
            return a.first<b.first;
        }
        else
        return x<y;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        int minind=INT_MAX,maxind=0;
        for(int i=0;i<n;i++)
        {
            v.push_back({start[i],end[i]});
           
        }
        sort(v.begin(),v.end(),comp);
        int i=1;
        int curr=v[0].second,count=1;
        while(i<n)
        {
            if(curr < v[i].first)
            {
                count++;
                curr=v[i].second;
            }
            i++;
        }
        return count;
        
    }
};
