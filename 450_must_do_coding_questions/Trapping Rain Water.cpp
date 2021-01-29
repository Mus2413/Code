int trappingWater(int arr[], int n){
    int b[n],c[n];
    b[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        b[i]=max(b[i+1],arr[i]);
    }
    c[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        c[i]=max(arr[i],c[i-1]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        //cout<<b[i]<<" "<<c[i]<<endl;
        sum+=min(b[i],c[i])-arr[i];
    }
    return sum;

    // Your code here
    
}