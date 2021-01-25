class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size();
        int i,j;
        int z=n-1;
        for(i=n-2;i>=0;i--)
        if(a[i]<a[i+1])
        break;
        
        if(i<0)
        {
            reverse(a.begin(),a.end());
        }
        else
        {
        for(j=n-1;j>i;j--)
        if(a[j]>a[i])
        break;
        swap(a[i],a[j]);
        
            reverse(a.begin()+i+1,a.end());
        }

        
        
        
    }
};