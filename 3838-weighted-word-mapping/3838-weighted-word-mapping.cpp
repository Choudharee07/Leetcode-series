class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string s:words){
            int sum=0;
            for(char c:s){
                int idx = c-97;
                sum+=weights[idx];
            }
            int val=96 + 26-(sum%26);
            ans += char(val);  
        }
        return ans;
        
    }
};