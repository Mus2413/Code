bool ispar(string x)
{
    stack<char> s;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='(' || x[i]=='[' || x[i]=='{')
        {
            s.push(x[i]);
        }
        else
        {
            
            if(s.size()==0)
            {
                return false;
            }
            else if(x[i]==')' && s.top()=='(')
            {
                s.pop();
               
            }
            else if(x[i]==']' && s.top()=='[')
            {
                s.pop();
               
            }
            else if(x[i]=='}' && s.top()=='{')
            {
                s.pop();
                
            }
            else
            {
                return false;
            }
            
         }
    }
    if(s.empty())
    return true;
    else
    return false;
}