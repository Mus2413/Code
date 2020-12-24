#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool myCompare(ll a, ll b){
    return b<a;
}

ll max_prod(ll a[] , int n ){

    if(n==5){
        return a[0]*a[1]*a[2]*a[3]*a[4];
    }

    int i = 0;
    int j = n-i-1;

    vector<ll> tempArray;
    {
        tempArray.push_back(a[0]*a[1]*a[2]*a[3]*a[4]);
        tempArray.push_back(a[0]*a[1]*a[2]*a[3] * a[j]);
        tempArray.push_back(a[0]*a[1]*a[2]*a[j-1]*a[j]);
        tempArray.push_back(a[0]*a[1]*a[j-2]*a[j-1]*a[j]);
        tempArray.push_back(a[0]*a[j-3]*a[j-2]*a[j-1]*a[j]);
    }

    return *max_element(tempArray.begin() , tempArray.end());

}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n ;

        ll a[n];

        for(int i=0;i<n;i++) {
            cin >> a[i];
        }

        sort(a,a+n,myCompare);

        cout<<max_prod(a,n)<<endl;
    }

    return 0;
}