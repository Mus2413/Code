#include<bits/stdc++.h>
class Solution{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
       multimap<int, int , greater <int> > mp;
        for(int i=0;i<n;i++)
        {
            bitset<32>b(arr[i]);
            mp.insert(make_pair(b.count(), arr[i])); 
        }
    int i=0;
    multimap<int,int > :: iterator it; 
    for (it=mp.begin() ; it!=mp.end() ; it++) 
    {
        arr[i]=(*it).second;
        i++;
    }
    return ;
    }
};