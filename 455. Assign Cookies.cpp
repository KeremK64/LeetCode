class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.empty() || s.empty()){
            return 0;
        }
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());

        int size = g.size();
        int j = 0;
        int count = 0;
        for(int i = 0; i < size; i++){
            if(g[i] <= s[j]){
                count++;
                if(j == s.size() - 1)
                    break;
                else
                    j++;
            }
            
            
        }
        return count;
    }
};
