#include <bits/stdc++.h> 
using namespace std; 

void print(string str, int low, int high)
{
    int i;
    for(i=low; i<=high; i++)
       cout<<str[i];
}

void lcs(string str)
{
    int l=str.size();
    int i, j, max=1, start=0, k;
    bool table[l][l];
    
    for(i=0; i<l; i++)
    for(j=0; j<l; j++)
    table[i][j]=0;
    
    
    for(i=0; i<l; i++)
        table[i][i]=true;
        
        
    int r=0;
    for(i=0; i<l; i++)
        if(str[i]==str[i+1])
        {
            table[i][i+1]=true;
            //only change is the when there is no Palindrome greater than length 1,
          
            if(r==0)
            {
                start=i;
                max=2;
                r=1;
            }
        }
        
        
    for(k=3; k<=l; k++)
        for(i=0; i<l-k+1; i++)
        {
            j=i+k-1;
            if(table[i+1][j-1] && str[i]==str[j])
            {
                table[i][j]=true;
                //only change is the when there is no Palindrome greater than length k,
              
                if(k>max)
                {
                    start=i;
                    max=k;
                }
            }
        }
        
    print(str, start, start+max-1);
   
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        lcs(s);
        cout<<endl;
    }
}