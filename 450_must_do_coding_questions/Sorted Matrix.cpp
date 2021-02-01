class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> ans;
        for(int i=0;i<Mat.size();i++)
        {
            for(int j=0;j<Mat[i].size();j++)
            {
                ans.push_back(Mat[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int k=0;
        for(int i=0;i<Mat.size();i++)
        {
            for(int j=0;j<Mat[0].size();j++)
            {
                Mat[i][j]=ans[k++];
            }
        }
        return Mat;
    }
};