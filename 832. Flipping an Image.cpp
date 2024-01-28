class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int size = image.size();
        int size1 = image[0].size();
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size1/2; j++){
                swap(image[i][j],image[i][size1 - j - 1]);
            }
        }   

        for(int i = 0; i < size; i++){
            for(int j = 0; j < size1; j++){
                if(image[i][j]){
                    image[i][j] = 0;
                }
                else{
                    image[i][j] = 1;
                }
            }

        }   
        return image;
    }
};