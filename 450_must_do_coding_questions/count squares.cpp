class Solution {
  public:
    int countSquares(int N) {
        float x=sqrt(N);
        if(x-floor(x)==0)
        {
            return x-1;
        }
        else
        return x;
    }
};