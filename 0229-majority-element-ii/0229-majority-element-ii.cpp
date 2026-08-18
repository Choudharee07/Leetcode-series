class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int val:nums){
            freq[val]++;
        }
        int target = nums.size()/3;
        for(const auto&[number,count]:freq){
            if(count>target) ans.push_back(number);
        }
        return ans;
    }
};