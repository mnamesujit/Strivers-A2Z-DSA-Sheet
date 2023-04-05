// URL
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661492263/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_7

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i=1;
    while(i<=n){
    // printing first Triangle-----
      int spaces=n-i;
      while(spaces){
        cout<<" ";
        spaces--;
      }
    // Printing Second Triangle-------
      int j=1;
      while(j<=i){
          cout<<"*";
          j++;
          
      }
    // Printing Third Triangle-----
    int k=i-1;
    while(k){
      cout<< "*";
      k--;
    }
      cout<<endl;
      i++;
        }
    }
};
