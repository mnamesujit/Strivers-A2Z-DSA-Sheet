//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int reverse=0;
            int original_num= n;
            if(n==0){
                return "Yes";
            }
            if (n<0){
                return "No";
            }
            while(n){
                if((reverse>INT_MAX/10)||(reverse<INT_MIN/10)){
                    return "No";
                }
                int last_digit=n%10;
                reverse= reverse*10 + last_digit;
                n = n/10;
            }
            if (original_num==reverse){
                return "Yes";
            }
            return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends