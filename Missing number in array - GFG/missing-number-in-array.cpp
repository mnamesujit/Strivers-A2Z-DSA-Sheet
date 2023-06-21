//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
         // Finding total sum of expected numbers till 1 to N (size)
        int totalSum = n*(n+1)/2;
            
        // Finding sum of element that presented in Array
        int sum = 0;
        
        // Running 
        for(int i=0; i<n-1; i++){
            sum += array[i];
        }
        return totalSum - sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends