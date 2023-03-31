// URL
// https://practice.geeksforgeeks.org/problems/for-loop-primecheck-java/1

void isPrime(int n) {
    bool flag=true;
    if(n<=1) cout<<"No";
    else{
        for (int i = 2; i <= sqrt(n); i++) {
        // code here
        if(n%i==0){
            flag=false;
            break;
        }
    }
    
    (flag) ? cout<<"Yes" : cout<<"No";
    }
    
    
cout << endl;
}
