vector<vector<int> > fourSum(vector<int> &arr, int num) {
    vector<vector<int>> ans;
    int n=arr.size();
    if(n<4)
    return ans;
    int i,j,k,l;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
             int x=arr[i]+arr[j]; 
             k=j+1;
             l=n-1;
             while(k<l)
             {
                 int y=x+arr[k]+arr[l];
                 if(y==num)
                 {
                     vector<int> temp;
                     temp.push_back(arr[i]);
                     temp.push_back(arr[j]);
                     temp.push_back(arr[k]);
                     temp.push_back(arr[l]);
                     ans.push_back(temp);
                 
                 int s=k;
                 int p=l;
                 while(k<l && arr[k]==arr[s])
                 {
                     k++;
                 }
                 while(k<l && arr[l]==arr[p])
                 {
                     l--;
                 }
                 
                 }
                 else if(y<num)
                 k++;
                 else
                 l--;
             }
        }
    }
    return ans;
}