class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 0; i < flights.size(); i++) {
            adj[flights[i][0]].push_back({flights[i][2], flights[i][1]});
        }
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> myq;
        myq.push({0, src, K+1});
        
        while (!myq.empty()) {
            auto temp = myq.top();
            myq.pop();
            int dist  = temp[0];
            int node  = temp[1];
            int steps = temp[2];
            
             if (steps < 0 ) {
                continue;
            }
            
            if (node == dst) {
                return dist;
            }
            for (int i = 0; i < adj[node].size(); i++) {
                int neigh = adj[node][i].second;
                int dist2 = adj[node][i].first;
                myq.push({dist2+dist, neigh, steps-1});
            }
        }
                         
        return -1;
    }
        
    
};