class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        cas(str,1,n);
        return str;
    }
    void cas(string &str, int k, int n){
        if(k == n)
            return ;
        else{
            string tempStr = str;
            str = "";
            int i = 1;
            int count = 0;
            char x = tempStr[0];
            while(i < tempStr.length())
            {
                if(x == tempStr[i])
                {
                    count++;
                }
                else
                {
                    str = str + to_string(count+1);
                    str = str + x;
                    x = tempStr[i];
                    count = 0;
                }
                i++;
            }
            str = str + to_string(count+1);
            str = str + x;
            k++;
            cas(str,k,n);
        }
    }
};