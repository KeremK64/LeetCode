class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sums;
        sums.push_back(nums[0]);
        int size = nums.size();
        for(int i = 0; i < size-1; i++){
            sums.push_back(sums[i] + nums[i+1]);
        }
        return sums;
    }
};
