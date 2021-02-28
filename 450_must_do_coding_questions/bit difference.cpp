class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        a=a^b;
        bitset<32>bit(a);
        return bit.count();
        
    }
};
