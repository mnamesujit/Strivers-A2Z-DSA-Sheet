class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result = 0;
        int i = 0;
        while(i<32){
            // shifting result to 1 left bit to calculate result
            result = (result << 1) | (n & 1);
            // shifting n to 1 right shift to access last bit one by one
            n >>= 1;
            i++;
        }
        return result;
    }
};