//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        //      [ space star space]
        //      [ 1 8 1 ]
        //      [ 2 6 2 ]
        //      [ 3 4 3 ]
        //      [ 4 2 4 ]
        //      [ 5 0 5 ]
        
        int stars = 2*(n-1);
        for(int i=1; i<=n; i++){
            
            // Numbers
            for(int j=1; j<=i; j++){
                cout << j << " " ;
            }
            
            // Stars
            for(int j=1; j<=stars; j++){
                cout << " " << " ";
            }
            
            // Numbers
            for(int j=i; j>=1; j--){
                cout<< j << " ";
            }
            cout << endl;
            stars -= 2; 
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