/*
Reverse bits of a given 32 bits unsigned integer.*/



class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a=0;
        int ct=0;
        while(ct<32){
            a=a<<1;
            a=a|(n&1);
            n=n>>1;
            ct++;
        }
        return a;
    }
};
