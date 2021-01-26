bool subArrayExists(int a[], int n)
{
    //Your code here
    unordered_map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        
        sum+=a[i];
        if(mp.find(sum)!=mp.end() || sum==0 || a[i]==0)
        {
            return true;
        }
        mp[sum]++;
    }
    return false;
}

