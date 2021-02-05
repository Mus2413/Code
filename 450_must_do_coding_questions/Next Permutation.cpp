class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int x,i;
        for(i=N-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                x=i;
                break;
            }
        }
        if(i<0)
        {
            sort(arr.begin(),arr.end());
            return arr;
        }
        for( i=N-1;i>x;i--)
        {
            if(arr[i]>arr[x])
            {
                swap(arr[i],arr[x]);
                break;
            }
        }
        reverse(arr.begin()+x+1,arr.end());
        return arr;
    }
};