class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        int maxcount=0;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            maxcount=max(maxcount,mp[arr[i]]);
        }
        int maxans=0;
        string ans="";
        for(auto i:mp)
        {
            if(i.second>maxans && i.second<maxcount)
            {
                maxans=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};