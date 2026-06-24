class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        nums.resize(len,0);
    }
};