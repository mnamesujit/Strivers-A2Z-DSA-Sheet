//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1; i<=2*n; i++){
            
            // stars
            int stars = n-i+1;
            if(i > n) stars = i-n;
            for(int j=1; j<=stars; j++){
                cout << "*";
            }
            
            // space
            int spaces = i;
            if(i>n) spaces = 2*n - i+1; 
            for(int j=1; j<spaces; j++){
                cout << "  ";
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