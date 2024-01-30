class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        vector<int> numsNums;
        vector<vector<int>> arr;
        int size = nums.size();
        int maxi = INT_MIN;

        for(int i = 0; i < 2*size; i++){
            numsNums.push_back(nums[i % (size)]);
        }

        for(int i = 0; i < size; i++){
            arr.push_back(vector<int>(size, 0));
            arr[i][0] = nums[i];
            if(maxi < arr[i][0]){
                maxi = arr[i][0];
            }
            for(int j = 1; j < size + 1; j++){
                arr[i][j] = arr[i][j-1] + numsNums[i + j];
                if(maxi < arr[i][j]){
                    maxi = arr[i][j];
                }
            }

        }

    
        return maxi;
    }
};
