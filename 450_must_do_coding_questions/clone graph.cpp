Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<Node*,Node*> ump;
        queue<Node*> q;
        q.push(node);
        ump[node]=new Node(node->val,{});
        
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            for(auto x : curr->neighbors){
                if(ump.find(x)==ump.end()){
                    q.push(x);
                    ump[x]=new Node(x->val,{});
                }
                ump[curr]->neighbors.push_back(ump[x]);
            }
        }
        return ump[node];
    }