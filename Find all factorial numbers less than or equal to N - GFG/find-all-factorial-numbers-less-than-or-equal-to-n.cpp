//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {   
        long long fact = 1;
        vector <long long> v;  
        for(long long i = 1; i <= N; i++){
        fact = fact * i;
        if (fact <= N){
            v.push_back(fact);
        }
        else
            break;
        
        }
       return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends