
string findSubString(string str)
{
    // Your code goes here   
    unordered_set<char>s ;
    for(int i=0;i<str.size();i++)
    s.insert(str[i]);
    
    int x=s.size();
    int n=str.size();
    if(x==n)
    return str;
    int start=0,size=n;
    int i=0,j=0;
    unordered_map<char,int>mp;
    int count=0;
    while(i<n)
    {
        mp[str[i]]++;
        if(mp[str[i]]==1)
           count++;
        if(x==count)
        {
            int y=i-j+1;
            if(size>y)
            {
                size=y;
                start=j;
            }
            while(count==x)
            {
               y=i-j+1;
               if(size>y)
               {
                size=y;
                start=j;
               }
               mp[str[j]]--;
               if(mp[str[j]]==0)
               {
                   count--;
               }
               j++;
            }
        }
        i++;
    }
    string temp=str.substr(start,size);
    //cout<<temp<<endl;
    return temp;
}