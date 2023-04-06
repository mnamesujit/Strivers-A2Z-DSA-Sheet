//Back-end complete function Template for C++

class Solution{

public:

    void printTriangle(int n) {

        // code here

        // Printing First Half Triangle

        int i=1;

        while(i<=n){

            int j=i;

            while(j){

                cout<<"*"<<" ";

                j--;

            }

        i++;

        cout<<endl;

        }

        // Printing Second Half Triangle

        int p=n-1;

        while(p){

            int j=p;

            while(j){

                cout<<"*"<<" ";

                j--;

            }

            p--;

            cout<<endl;

        }

    }

};

