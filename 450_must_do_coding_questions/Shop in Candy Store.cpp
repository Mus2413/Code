vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        sort(candies,candies+n);
        int minamount=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            minamount+=candies[i];
            i++;
            j-=k;
        }
        i=n-1;
        j=0;
        int maxamount=0;
        while(i>=j)
        {
             maxamount+=candies[i];
             i--;
            j+=k;
        }
        vector<int>ans;
        ans.push_back(minamount);
        ans.push_back(maxamount);
        return ans;
    }