// URL
// https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9

// class Solution {
//   public:
//     void printDiamond(int n) {
//         // code here
//         // Printing First Half Triangle
//         int i=1;
//         while(i<=n){
//         // Printing First Half Triangle Spaces
//             int spaces=n-i;
//             while(spaces){
//                 cout<<" ";
//                 spaces--;
//             }
//             // Printing First Half Triangle Stars
//             int k=1;
//             while(k<=i){
//                 cout<<"*"<<" ";
//                 k++;
//             }
//             i++;
//             cout<<endl;
//         }
        
//         // Printing Second Half Triangle
//         int x=n;
//         while(x){
//             // Printing Second Half Triangle Spaces
//             int spaces=n-x;
//             while(spaces){
//                 cout<<" ";
//                 spaces--;
//             }
//             // Printing Secon Half Triangle Stars
//             int j=x;
//             while(j){
//                 cout<<"*"<<" ";
//                 j--;
//             }
            
//             x--;
//             cout<<endl;
//         }
//     }
// };


// Optimized Solution
class Solution {
  public:
    void printDiamond(int n) {
     
        // Printing First Half diamond
        for(int i=0;i<n; i++){
        //   Spaces
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            // Stars
            for(int j=0;j<=i;j++){
                cout<<"*";
                cout<<" ";
            }
            // Stars
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
           cout<<endl;
        }
        // Printing Second Half diamond
        // Printing First Half diamond
        for(int i=0;i<n; i++){
        //   Spaces
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            // Stars
            for(int j=0;j<n-i;j++){
                cout<<"*";
                cout<<" ";
            }
            // Stars
            for(int j=0;j<i;j++){
                cout<<" ";
            }
           cout<<endl;
        }

        
    }
};
