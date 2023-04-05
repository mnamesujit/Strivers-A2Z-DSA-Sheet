// URL
// https://practice.geeksforgeeks.org/problems/triangle-number-1661489840/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_6


class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n-i+1;j++){
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    }
	}
};
