char* reverse(char *S, int len)
{
    stack<char>st;
    for(int i=0;i<len;i++)
    {
        st.push(S[i]);
    }
    int i=0;
    
    while(!st.empty())
    {
        //cout<<st.top();
        S[i]=st.top();
        //cout<<S[i];
        i++;
        st.pop();
    }
  return S;
}