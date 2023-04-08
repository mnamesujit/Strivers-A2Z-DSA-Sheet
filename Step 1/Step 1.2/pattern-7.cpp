// URL
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661492263/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_7

// class Solution {
//   public:
//     void printTriangle(int n) {
//         // code here
//         int i=1;
//     while(i<=n){
//     // printing first Triangle-----
//       int spaces=n-i;
//       while(spaces){
//         cout<<" ";
//         spaces--;
//       }
//     // Printing Second Triangle-------
//       int j=1;
//       while(j<=i){
//           cout<<"*";
//           j++;
          
//       }
//     // Printing Third Triangle-----
//     int k=i-1;
//     while(k){
//       cout<< "*";
//       k--;
//     }
//       cout<<endl;
//       i++;
//         }
//     }
// };

// Optimized Soltion
for(int i=0; i<n; i++){
            // printing Spaces
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
        
            // stars
            for( int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            
            // Spaces
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
        }
