class Solution {
public:
    string truncateSentence(string s, int k) {
        string result = "";
        string temp = "";
        int i = 0;
        int j = 0;
        while(i < k && s[j] != '\0'){
            if(s[j] != ' '){
                temp += s[j];

            }
            else{
                result += temp;
                if(i < k - 1){
                    result += " ";
                }
                temp = "";
                i++;

            }

            if(j == s.size() - 1){
                result += temp;
            }
            j++;
        }
        return result;
    }
};
