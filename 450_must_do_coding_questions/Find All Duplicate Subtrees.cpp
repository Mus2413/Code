string inorder(Node* node, unordered_map<string, int>& m)
{
	if (!node)
		return "";

	string str = "(";
	str += inorder(node->left, m);
	str += to_string(node->data);
	str += inorder(node->right, m);
	str += ")";

	if (m[str] == 1)
		cout << node->data << " ";

	m[str]++;

	return str;
}
void printAllDups(Node* root)
{
	unordered_map<string, int> m;
	inorder(root, m);
}