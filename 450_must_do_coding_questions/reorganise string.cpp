struct MyPair{
    char c;
    int freq;
    bool operator()(const MyPair &m1, const MyPair& m2){
        return m1.freq < m2.freq;
    }
};
class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<MyPair,vector<MyPair>,MyPair> pq;
        int i;
        string output = "";
        vector<int> count(26,0);
        for(i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
        }
        for(i = 0; i < 26; i++){
            MyPair m;
            if(count[i] != 0){
                m.c = i + 'a';
                m.freq = count[i];
                pq.push(m);
            }
        }
        MyPair prev,cur;
        prev = pq.top();
        pq.pop();
        output += prev.c;
        prev.freq--;
        while(pq.size()){
            cur = pq.top();
            pq.pop();
            output += cur.c;
            cur.freq--;
            if(prev.freq != 0){
                output += prev.c;
                prev.freq--;
            }
            if(prev.freq == 0){
                    if(cur.freq > 0){
                        prev = cur;
                    }
                }else{
                    if(cur.freq != 0)
                    pq.push(cur);
                }
            }
        if(prev.freq == 1){
            if(output[output.size() - 1] != prev.c){
                output += prev.c;
                prev.freq--;
            }
        }
     if(prev.freq > 0){
         return "";
     }
        return output;
     }
};