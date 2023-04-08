// // URL
// // https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8

// class Solution{
// public:
	
// 	void printTriangle(int n) {
// 	    // code here
// 	    int i=1;
// 	    while(i<=n){
// 	       // Printing Spaces / First Loop
// 	        int spaces= i-1;
// 	        while(spaces){
// 	            cout<<" ";
// 	            spaces--;
// 	        }
	        
// 	       // Printing First Loop
// 	       int j=1;
// 	       while(j<=n-i+1){
// 	           cout<<"*";
// 	           j++;
// 	       }
	       
// 	       //Printing Third Loop
// 	        int k=n-i;
// 	        while(k){
// 		        cout<<"*";
// 		        k--;
// 	        }
// 	       i++;
// 	       cout<<endl;
	       
	        
// 	    }
	    
// 	}
// };




// Optimized Solution
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=0; i<n; i++){
            // printing Spaces
            for(int j=0; j<i; j++){
                cout<<" ";
            }
        
            // stars
            for( int j=0;j<2*n -(2*i +1);j++){
                cout<<"*";
            }
            
            // Spaces
            for(int j=0; j<i; j++){
                cout<<" ";
            }
            cout<<endl;
        } 
	}
};
