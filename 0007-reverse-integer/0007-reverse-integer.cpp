class Solution {
public:
    int reverse(int x) {
        int reverse_num=0;
        
        while(x){
            int last_digit=x%10;
            if((reverse_num>INT_MAX/10)||(reverse_num<INT_MIN/10)){
                return 0;
            }
            reverse_num=reverse_num*10+last_digit;
            x=x/10;
        }
        return reverse_num;
    }
};