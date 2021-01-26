#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[100000];
	   fill(a,a+100000,-1);
	   int end=0;a[0]=1;
	   
	   for(int i=2;i<=n;i++){
	       int carry=0;
	       for(int j=0;j<=end;j++){
	           
	           int multiply=a[j]*i+carry;
	           a[j]=multiply%10;
	           carry=multiply/10;
	       }
	       
	       while(carry!=0){
	           a[++end]=carry%10;
	           carry=carry/10;
	       }
	   }
	   for(int i=end;i>=0;i--){
	       cout<<a[i];
	   }
	   cout<<endl;
	}
	
	return 0;
}