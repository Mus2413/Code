#include <stack>
vector<int> reverseLevelOrder(Node* root)
{
    std::queue<Node*> Queue;
    Queue.push(root);
    std::stack<int> Stack;

    while(!Queue.empty())
    {
        Node* Current_Node = Queue.front();
        Queue.pop();
        Stack.push(Current_Node->data);

        if(Current_Node->right!=NULL) Queue.push(Current_Node->right);
        if(Current_Node->left!=NULL) Queue.push(Current_Node->left);
    }
    vector<int> ans;
    while(!Stack.empty())
    {
        ans.push_back(Stack.top());
        Stack.pop();
    }
    return ans;
} 