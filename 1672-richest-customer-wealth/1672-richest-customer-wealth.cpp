class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int cos= accounts.size();
        int amount = accounts[0].size();
        int val=0;
        for(int i=0;i<cos;i++){
            for(int j =0;j<amount;j++){
                wealth+=accounts[i][j];
            }
            val = max(val,wealth);
            wealth=0;
        }
        return val;
    }
};