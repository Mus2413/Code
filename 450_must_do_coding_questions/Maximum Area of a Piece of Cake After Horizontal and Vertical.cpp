class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
         verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int maxiH = INT_MIN, maxiW = INT_MIN;
        
        for(int i=0; i<horizontalCuts.size()-1; i++)
            maxiH = max(maxiH,(long long int) horizontalCuts[i+1] - horizontalCuts[i]);
        
        
        for(int i=0; i<verticalCuts.size()-1; i++)
            maxiW = max(maxiW,(long long int) verticalCuts[i+1] - verticalCuts[i]);
        
        return (maxiW %1000000007 * maxiH %1000000007)%1000000007;
        
    }
};