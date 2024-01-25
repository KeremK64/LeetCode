class Solution {
public:
    int findLHS(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int size = nums.size();
        int mini;
        int maxi;
        vector<pair<int,int>> pairs;
        for(int i = 0; i < size - 1; i++){
            if(nums[i] + 1 == nums[i+1]){
                mini = nums[i];
                maxi = nums[i+1];
                pairs.push_back(make_pair(mini, maxi));
            }
        }

        int maxResult = 0;
        int count = 0;
        for(int i = 0; i < pairs.size(); i++){
            for(int j = 0; j < size; j++){
                if(nums[j] == pairs[i].first || nums[j] == pairs[i].second){
                    count++;
                }
            }
            if(count > maxResult){
                maxResult = count;
            }
            count = 0;
        }
        return maxResult;
    }
};
