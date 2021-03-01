class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==1)
        return true;
        float x=log2(n);
        if(x-floor(x)==0)
        return true;
        else
        return false;
        
    }
};
