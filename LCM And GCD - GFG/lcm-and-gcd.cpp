//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
      long long LCM = 0;
      long long GCD = 0;
      //   Original Numbers 
      long long x1 = A;
      long long x2 = B;
      
      while(A % B != 0){
          int rem = A % B;
          A = B;
          B = rem;
      }
      GCD = B;
      LCM = (x1 * x2) / GCD;
      return {LCM,GCD};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends