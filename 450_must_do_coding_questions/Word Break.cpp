int wordBreak(string A, vector<string> &B) {
    string temp;
    for(int i=0;i<A.length();i++)
    {
        temp.push_back(A[i]);
        if(find(B.begin(),B.end(),temp)!=B.end())
        {
            temp="";
        }
    }
    if(temp.length()==0)
    return 1;
    else
    return 0;
}