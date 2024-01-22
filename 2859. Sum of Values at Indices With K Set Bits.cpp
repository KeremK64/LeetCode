class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int count = 0;
        int result = 0;
        int size = nums.size();
        int temp;
        for(int i = 0; i < size; i++){
            temp = i;
            while(temp != 0){
                temp = temp & (temp-1);
                count++;
            }
            if(count == k){
                result += nums[i];
            }
            count = 0;
        }
        return result;
    }
};