int minJumps(int arr[], int n){
    // Your code here
    int* jumps = new int[n];
    int i, j;
 
    if (n == 0 || arr[0] == 0)
        return -1;
 
    jumps[0] = 0;
 
    for (i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            }
        }
    }
    if(jumps[n-1]==INT_MAX)
    return -1;
    else
    return jumps[n-1];
}