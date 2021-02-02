class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    int n=S.length();
	    for(int i=0;i<n;i++)
	    {
	        if(S[i]!=S[n-1-i])
	        return 0;
	    }
	    return 1;
	}

};