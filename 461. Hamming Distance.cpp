class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorr = (x ^ y);
        int temp = xorr;
        int count = 0;
        while(temp != 0){
            temp = temp & (temp - 1);
            count++;
        }
        return count;
    }
};
