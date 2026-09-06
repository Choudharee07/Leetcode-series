class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>distinct(2);
        unordered_set<int>NUMS1(nums1.begin(),nums1.end());
        unordered_set<int>NUMS2(nums2.begin(),nums2.end());
        for(int val:NUMS1){
            if(!NUMS2.count(val)) distinct[0].push_back(val);
        }
        for(int val:NUMS2){
            if(!NUMS1.count(val)) distinct[1].push_back(val);
        }        
        return distinct;
    }
};