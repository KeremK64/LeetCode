class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int size = arr.size();
        int n = sizeof(arr)/sizeof(arr[0]);
        std::sort(arr.begin(), arr.end());
        int mini = INT_MAX;

        for(int i = 0; i < size - 1; i++){
            if(arr[i + 1] - arr[i] < mini){
                mini = arr[i + 1] - arr[i];
            }
        }

        vector<vector<int>> result;
        for(int i = 0; i < size - 1; i++){
            if(arr[i + 1] - arr[i] == mini){
                result.push_back({arr[i], arr[i+1]});
            }
        }
        return result;
    }
};
