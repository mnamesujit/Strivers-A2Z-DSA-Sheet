// URL
// https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9

class Solution {
  public:
    void printDiamond(int n) {
        // code here
        // Printing First Half Triangle
        int i=1;
        while(i<=n){
        // Printing First Half Triangle Spaces
            int spaces=n-i;
            while(spaces){
                cout<<" ";
                spaces--;
            }
            // Printing First Half Triangle Stars
            int k=1;
            while(k<=i){
                cout<<"*"<<" ";
                k++;
            }
            i++;
            cout<<endl;
        }
        
        // Printing Second Half Triangle
        int x=n;
        while(x){
            // Printing Second Half Triangle Spaces
            int spaces=n-x;
            while(spaces){
                cout<<" ";
                spaces--;
            }
            // Printing Secon Half Triangle Stars
            int j=x;
            while(j){
                cout<<"*"<<" ";
                j--;
            }
            
            x--;
            cout<<endl;
        }
    }
};
