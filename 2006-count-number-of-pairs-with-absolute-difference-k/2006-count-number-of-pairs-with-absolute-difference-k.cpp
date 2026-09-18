class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans =0;
        unordered_map<int,int>freq;
        for(int val:nums){
            freq[val]++;
        }
        for(auto & [val,counts]:freq){
            if(freq.count(val-k)) ans+=freq[val-k]*freq[val];
        }
        return ans;
    }
};