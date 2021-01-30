
class Solution{   
public:
    void threeWayPartition(vector<int>& v,int a, int b)
    {
        int k=0,j=v.size()-1;
        for(int i=0;i<=j;i++)
        {
            if(v[i]<a)
            {
                swap(v[i],v[k]);
                k++;
            }
            else if(v[i]>b)
            {
                swap(v[i],v[j]);
                i--;
                j--;
            }
        }
    }
};