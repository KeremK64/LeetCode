class Solution {
public:
    int findMaxIdx(vector<int>& nums){
        int size = nums.size();
        int maxi = INT_MIN;
        int idx = -1;
        for(int i = 0; i < size; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                idx = i;
            }
        }
        return idx;
    }
    int maximizeSum(vector<int>& nums, int k) {
        int size = nums.size();
        int temp;
        int result = 0;

        for(int i = 0; i < k; i++){
            temp = findMaxIdx(nums);
            result += nums[temp];
            nums[temp]++;
        }
        return result;
    }
};

