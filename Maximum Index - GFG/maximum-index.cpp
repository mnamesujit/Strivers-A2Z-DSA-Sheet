//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        
        // Time Complexity O(n**2) -> First Approach
        // int max_index =0;
        // for(int i = 0; i<n; i++){
        //     for(int j = n-1; j>i; j--){
        //         if(arr[j] >= arr[i]){
        //             int temp = j-i;
        //             if(temp > max_index){
        //                 max_index = temp;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return max_index;
        
        // O(n) -> Second Approach
        int max_index=0;
        vector<int> lmin(n),rmax(n);
        lmin[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            lmin[i] = min(lmin[i-1],arr[i]);
        }
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rmax[i] = max(rmax[i+1],arr[i]);
        }
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(lmin[i]<=rmax[j])
            {
                max_index = max(max_index,j-i);
                j++;
            }
            else i++;
        }
        return max_index;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends