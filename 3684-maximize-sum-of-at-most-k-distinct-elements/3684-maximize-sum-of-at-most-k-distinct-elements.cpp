class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int>check(nums.begin(),nums.end());
        int len = check.size();
        vector<int>ans;
        int cnt=0;
        for (auto it = check.rbegin(); it != check.rend() && cnt < k; ++it, ++cnt){  
            ans.push_back(*it);
        }
        return ans;
    }
};