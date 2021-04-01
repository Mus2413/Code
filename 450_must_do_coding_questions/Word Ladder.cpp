class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=beginWord.length();
        set<char> s[n+1];
        unordered_map<string,bool>visited;
        for(int i=0;i<wordList.size();i++)
        {
            visited[wordList[i]]=false;
            for(int j=0;j<wordList[i].length() && j<n;j++)
            {
                s[j].insert(wordList[i][j]);
            }
        }
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        visited[beginWord]=true;
        while(!q.empty())
        {
            string x=q.front().first;
            int count=q.front().second;
            q.pop();
            if(x==endWord)
            {
                return count;
            }
            for(int i=0;i<n;i++)
            {
               
                for(auto a:s[i])
                {
                     string temp=x;
                     temp[i]=a;
                     if(visited.find(temp)!=visited.end())
                     {
                         if(visited[temp]==false)
                         {
                             q.push({temp,count+1});
                             visited[temp]=true;
                         }
                     }
                }
            }
        }
        return 0;
        
        
    }
};