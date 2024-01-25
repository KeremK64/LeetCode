class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        if(nums.empty()){
            return 0;
        }
        if(size == 1){
            if(target == nums[0] || target < nums[0]){
                return 0;
            }
            return 1;
        }
        if(target < nums[0]){
            return 0;
        }
        for(int i = 0; i < size - 1; i++){
            if(target == nums[i]){
                return i;
            }
            else if(nums[i] < target && nums[i+1] > target){
                return i + 1;
            }
        }
        if(nums[size - 1] == target){
            return size - 1;
        }
        return size;   
    }
};
