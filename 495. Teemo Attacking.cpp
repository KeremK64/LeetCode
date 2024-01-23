class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int size = timeSeries.size();
        int result = 0;
        for(int i = 0; i < size - 1; i++){
            if(timeSeries[i+1] - timeSeries[i] <= duration){
                result += timeSeries[i+1] - timeSeries[i];
            }
            else{
                result += duration;
            }
        }
        result += duration;
        return result;
    }
};