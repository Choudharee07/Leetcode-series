class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int>num1(nums1.begin(),nums1.end());
        unordered_set<int>num2(nums2.begin(),nums2.end());
        unordered_set<int>num3(nums3.begin(),nums3.end());
        vector<int>ans;
        for(int val:num1){
            if(num2.count(val)){
                ans.push_back(val);
                continue;
            }
            if(num3.count(val)) ans.push_back(val);
        }
        for(int val:num2){
             if(num3.count(val) && !num1.count(val)) ans.push_back(val);
        }
        return ans;
    }
};