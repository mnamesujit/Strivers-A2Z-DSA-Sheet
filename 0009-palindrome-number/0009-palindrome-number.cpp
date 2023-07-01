class Solution {
public:
    bool isPalindrome(int x) {
        int reverse=0;
        int original_num= x;
        if(x==0){
            return true;
        }
        if (x<0){
            return false;
        }
        while(x){
            if((reverse>INT_MAX/10)||(reverse<INT_MIN/10)){
                return false;
            }
            int last_digit=x%10;
            reverse= reverse*10 + last_digit;
            x=x/10;
        }
        if (original_num==reverse){
            return true;
        }
        return false;
    }
};