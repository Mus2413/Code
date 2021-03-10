vector<int> levelOrder(Node* node)
{
    vector<int>ans;
    if(node==NULL)
    return ans;
    queue<Node*> q;
    q.push(node);
    while(!q.empty())
    {
        int n=q.size();
        while(n>0)
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            
            ans.push_back(temp->data);
            n--;
        }
    }
    return ans;
}