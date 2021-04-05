bool safe(bool graph[101][101],int V,int s,int j,int *marked){
    for(int k=0;k<V;k++){ 
        if(graph[s][k] && marked[k]==j){
            return false;
        }
    }
    return true;
}
bool permutate(bool graph[101][101],int *marked,int V,int m,int i){
    if(i==V){return true;}
    for(int j=0;j<m;j++){
        if(safe(graph,V,i,j,marked)){
            marked[i]=j;
            if(permutate(graph,marked,V,m,i+1)){return true;}
            marked[i]=-1;
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int V) {
    int marked[V];
    fill(marked,marked+V,-1);
    bool flag=true;
    return permutate(graph,marked,V,m,0);
}