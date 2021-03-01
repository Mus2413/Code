class Solution{
    public:
    int findPosition(int N) {
        if(N==0 || N&(N-1)) 
        return -1;
        int count=0;
        while(N!=0)
        {
            count++;
            if(1&N)
            return count;
            N=N>>1;
        }
        return -1;
        // code here
    }
};
