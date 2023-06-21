//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0; i<n; i++){
            // Printing Spaces
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            
            // Printing Stars
            for(int j=0; j<2*i+1; j++){
                cout<<"*";
            }
            
            // Printing Spaces
            // for(int j=0; j<n-i-1; j++){
            //     cout<<" ";
            // }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends