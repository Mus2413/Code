class Solution{
    public:
    // The main function that returns value of a given postfix expression
    int evaluatePostfix(string S)
    {
        stack<int>s;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>='0' && S[i]<='9')
            {
                s.push(S[i]-'0');
            }
            else if(S[i]=='+')
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a+b);
            }
             else if(S[i]=='*')
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a*b);
            }
             else if(S[i]=='-')
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b-a);
            }
             else if(S[i]=='/')
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b/a);
            }
        }
        return s.top();
    }
};
