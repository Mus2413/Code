class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int n=v.size();
		    if(n%2==0)
		    {
		        int mid=n/2;
		        return ((v[mid]+v[mid-1])/2);
		    }
		    else
		    {
		        int mid=n/2;
		        return v[mid];
		    }
		}
};