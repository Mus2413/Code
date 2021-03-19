int sumOfGrandChildren(node* node, map<struct node*, int>& mp)
{
	int sum = 0;
	if (node->left)
		sum += solve(node->left->left, mp) + solve(node->left->right, mp);
	if (node->right)
		sum += solve(node->right->left, mp) + solve(node->right->right, mp);

	return sum;
}

int solve(node* node, map<struct node*, int>& mp)
{
	if (node == NULL)
		return 0;
	if (mp.find(node) != mp.end())
		return mp[node];
	int incl = node->data + sumOfGrandChildren(node, mp);
	int excl = solve(node->left, mp) +solve(node->right, mp);
	mp[node] = max(incl, excl);

	return mp[node];
}

int getMaxSum(node* node)
{
	if (node == NULL)
		return 0;
	map<struct node*, int> mp;
	return solve(node, mp);
}
