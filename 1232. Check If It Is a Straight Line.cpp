class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size = coordinates.size();
        float slope;
        if(coordinates[1][0] == coordinates[0][0]){
            slope = INT_MAX;
        }
        else{
            slope = (float)(coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);
        }
        float slopeTemp;
        for(int i = 1; i < size-1; i++){
            if(coordinates[i+1][0] == coordinates[i][0]){
                slopeTemp = INT_MAX;
            }
            else{
                slopeTemp = (float)(coordinates[i+1][1] - coordinates[i][1])/(coordinates[i+1][0] - coordinates[i][0]);
            }
            
            if(slope == slopeTemp){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
