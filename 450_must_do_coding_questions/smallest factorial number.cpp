class Solution
{
    public:
    int trail_(int x) {
            int ans = 0;
            while (x) {
                ans += x/5;
                x = x/5;
            }
            return ans;
        }
        int findNum(int n)
        {
        //complete the function here
         int l = 0, r = 5e4, mid, ans = INT_MAX;
            while (l <= r) {
                mid = l + (r-l)/2;
                if (trail_(mid) >= n) {
                    ans = min(ans, mid);
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            return ans;
        }
};