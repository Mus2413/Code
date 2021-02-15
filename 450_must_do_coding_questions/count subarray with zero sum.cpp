//User function template for C++

// arr : given array 
// n : size of the given array
ll findSubarray(vector<ll> arr, int n ) {
    unordered_map<ll,ll>mp;
    mp[0]=1;
    ll temp=0,count=0;
    for(int i=0;i<n;i++)
    {
        temp+=arr[i];
        if(mp.find(temp)!=mp.end())
        {
            count+=mp[temp];
            mp[temp]++;
        }
        else
        {
            mp[temp]++;
        }
    }
    return count;
}
