class Solution {
  public:
  #define mod 1000000007
    long long int countBT(int h) { 
        // code here
        long long int dp[h + 1] = {0};
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= h; i++) {
        dp[i] = (dp[i - 1] * ((2 * dp[i - 2]) % mod + dp[i - 1])) % mod ;
        }
        return dp[h];
    }
};
