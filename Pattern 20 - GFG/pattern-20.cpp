//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        // Outer Loop
        for(int i=1; i<2*n; i++){
            
            // Stars
            int stars = i;
            if(i>n) stars = 2*n-i;
            for(int j=1; j<=stars; j++){
                cout << "*";
            }
            
            // Spaces
            int spaces = 2*(n-i);
            if(i>n) spaces = 2*(i-n);
            for(int j=1; j<=spaces; j++){
                cout << " ";
            }
            
            // Stars
            for(int j=1; j<=stars; j++){
                cout << "*";
            }
            
            cout << endl;
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