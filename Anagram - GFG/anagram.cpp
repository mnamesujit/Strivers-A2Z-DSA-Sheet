//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int s1 = a.length();
        int s2 = b.length();
        if(s1 != s2) return false;
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0;
        int temp = 0;
        while(i < s1){
            if(a[i] == b[i]){
                temp = 1;
            }
            else{
                return false;
            }
            i++;
        }
        if(temp == 1) return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends