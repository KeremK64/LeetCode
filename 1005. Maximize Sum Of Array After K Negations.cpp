class Solution {
public:
    int findMin(vector<int>& arr){
        int size = arr.size();
        int mini = INT_MAX;
        int idx;
        for(int i = 0; i < size; i++){
            if(arr[i] < mini){
                mini = arr[i];
                idx = i;
            }
        }
        return idx;
    }

    int findSum(vector<int> arr){
        int size = arr.size();
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += arr[i];
        }
        return sum;
    }

    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int idx;
        for(int i = 0; i < k; i++){
            idx = findMin(nums);
            nums[idx] *= -1;
        }
        return findSum(nums);
    }
};
