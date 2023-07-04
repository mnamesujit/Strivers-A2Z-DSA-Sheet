//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start = 0;
        int end = 0;
        int count = 0;
        long long product = 1;
        //right and left are the pointers to start and end of window
        for(end = 0; end < n; end++)
        {
            product = product * a[end];
            
            while(product >= k && start <= end)
            {
                product = product / a[start];
                start++;
            }
            
            if(product < k)
            {
                //As we add one element to the left side of our window it produces (right-left+1)
                count =  count + end - start + 1;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends