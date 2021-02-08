class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0 )
            return "";
        if(strs.size()==1)
            return strs[0];
        int minlen=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].length()<minlen)
            {
                minlen=strs[i].length();
            }
        }
        string ans="";
        for(int i=0;i<minlen;i++)
        {
            bool flag=false;
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]==strs[j+1][i])
                {
                    continue;
                }
                else
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                ans.push_back(strs[0][i]);
            }
            else
            {
                break;
            }
        }
        return ans;
        
    }
};