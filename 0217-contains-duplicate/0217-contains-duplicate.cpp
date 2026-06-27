class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>myset;
        for(int val: nums){
            myset.insert(val);
        }
        if(nums.size()==myset.size()){
            return false;
        }else{
            return true;
        }    
    }
};