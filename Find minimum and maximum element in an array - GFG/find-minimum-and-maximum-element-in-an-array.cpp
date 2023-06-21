//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
    // loop to iterate array
    long long minval = a[0];
    long long maxval = a[0];
    for(int i=0; i<n; i++){
        // inner loop for finding max and min element
        if(a[i]>maxval){
            maxval = a[i];
        }
        else if(a[i]<minval){
            minval = a[i];
        } 
        else{
            continue;
        }
    }
    return make_pair(minval,maxval);
}