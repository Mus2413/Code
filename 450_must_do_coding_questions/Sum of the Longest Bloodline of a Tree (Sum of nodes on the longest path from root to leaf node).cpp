void helper(Node* root, int &mx_sum,int &mx_lvl, int sum,int lvl){
if(!root) return;
sum+=root->data;
lvl++;
if(!root->left and !root->right){
if(lvl>mx_lvl){
mx_lvl=lvl;
mx_sum=sum;
}
if(lvl==mx_lvl and sum>mx_sum){
mx_lvl=lvl;
mx_sum=sum;
}
}
helper(root->left,mx_sum,mx_lvl,sum,lvl);
helper(root->right,mx_sum,mx_lvl,sum,lvl);
}

int sumOfLongRootToLeafPath(Node* root)
{
	int mx_sum=0,mx_lvl=0;
helper(root,mx_sum,mx_lvl,0,0);
return mx_sum;
}