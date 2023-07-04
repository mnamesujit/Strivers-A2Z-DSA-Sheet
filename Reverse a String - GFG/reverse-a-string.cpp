//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    
  //Your code here
   int r = str.size() - 1;
    for(int i = 0; i < str.size(); i++){
        if(r>i){
          int temp = str[i];
          str[i] = str[r];
          str[r] = temp;
          r--;
        }
    }
    return str;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends