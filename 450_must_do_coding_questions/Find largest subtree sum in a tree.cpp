
int solve(Node* root, int& ans) 
{ 
    if (root == NULL)      
        return 0; 
 
    int currSum = root->key +  
      solve(root->left, ans) 
      + solve(root->right, ans); 
  
    ans = max(ans, currSum); 
  
    return currSum; 
} 

int findLargestSubtreeSum(Node* root) 
{ 
    if (root == NULL)      
        return 0; 
      
    
    int ans = INT_MIN; 
    solve(root, ans); 
  
    return ans; 
} 