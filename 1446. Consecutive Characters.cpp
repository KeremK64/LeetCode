class Solution {
public:
    int maxPower(string s) {
        int i = 0;
        int temp = 1;
        int max = 0;
        while(s[i] != '\0'){
            if(s[i] == s[i+1]){
                temp++;
                
            }
            else{
                if(temp > max){
                    max = temp;
                }
                temp = 1;
            }
            i++;
        }
        return max;
    }
};