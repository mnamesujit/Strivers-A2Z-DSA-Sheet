class Solution {
public:
    void reverseString(vector<char>& s) {
        int r = (s.size() - 1);
        for(int i = 0; i<s.size(); i++){
            if( r>=i ){
                int temp = s[i];
                s[i] = s[r];
                s[r] = temp;
                r--;
            }
        }
    }
};