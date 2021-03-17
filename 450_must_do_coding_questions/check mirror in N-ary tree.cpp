
bool mirrorUtil(vector<stack<int> >& tree1,vector<queue<int> >& tree2)
{
	for (int i = 1; i < tree1.size(); ++i) {
		stack<int>& s = tree1[i];
		queue<int>& q = tree2[i];

		while (!s.empty() && !q.empty()) {
			if (s.top() != q.front())
				return false;

			s.pop();
			q.pop();
		}
		if (!s.empty() || !q.empty())
			return false;
	}

	return true;
}

void areMirrors(int m, int n, int u1[], int v1[], 	int u2[], int v2[])
{
	vector<stack<int> > tree1(m + 1);
	vector<queue<int> > tree2(m + 1);

	for (int i = 0; i < n; i++) 
		tree1[u1[i]].push(v1[i]); 

	for (int i = 0; i < n; i++) 
		tree2[u2[i]].push(v2[i]);
	

	mirrorUtil(tree1, tree2) ? (cout << "Yes" << endl) :
							(cout << "No" << endl);
}
