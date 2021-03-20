int minJumps(int a[], int n){
    // Your code here
    int count=0,j;
      for(int i=0;i<n;)
      {
          if(a[i]+i>=n-1)
          {
              count++;
              break;
          }
          int steps=a[i];
          if(steps==0)
          {
              count=-1;
              break;
          }
          int maxreach=0;
          while(steps>0)
          {
              int x=a[steps+i]+steps+i;
             if( maxreach<x){
                 maxreach=x;
                 j=steps+i;   
             }
              steps--;
          }
          i=j;
          count++;
          
      }
      return count;
}
