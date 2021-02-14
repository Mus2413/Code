class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int i=0;
        while(i<n)
        {
            while(arr[i]!=arr[arr[i]-1])
            {
                swap(arr[i],arr[arr[i]-1]);
            }
            i++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                arr[0]=arr[i];
                arr[1]=i+1;
                break;
            }
        }
        return arr;
    }
};