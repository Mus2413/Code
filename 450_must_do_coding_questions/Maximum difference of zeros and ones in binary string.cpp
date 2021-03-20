class Solution{
public:	
	int maxSubstring(string S)
	{
	     int sum=0;
	     int ans=INT_MIN;
	     for(int i=0;i<S.length();i++)
	     {
	         if(S[i]=='0')
	         sum+=1;
	         else
	         sum+=-1;
	         ans=max(sum,ans);
	         if(sum<0)
	         sum=0;
	     }
	     return ans;
	}
};