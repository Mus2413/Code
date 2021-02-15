class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i=n-1,k=0;
	    while(i>=0 && k<m)
	    {
	        if(arr1[i]>=arr2[k])
	        {
	            swap(arr2[k],arr1[i]);
	            
	        }
	        k++;
	        i--;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};