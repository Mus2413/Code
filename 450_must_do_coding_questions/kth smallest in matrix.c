#define dataset pair<int, pair<int,int> > 
bool compare(const dataset &d1, const dataset &d2){
    return (d1.first>d2.first);
}
int kthSmallest(int mat[MAX][MAX], int n, int k){
    priority_queue<dataset, vector<dataset>, decltype(&compare)> pq(compare);
    for(int i=0; i<n; i++){
        pq.push({mat[0][i],{0,i}});
    }
    int ans;
    while(k--){
        dataset temp = pq.top();
        ans = temp.first;
        pq.pop();
        int col = temp.second.second;
        int row = temp.second.first;
        if(row != n-1){
            row = row + 1;
            pq.push({mat[row][col],{row,col}});
        }
    }
    return ans;
}
