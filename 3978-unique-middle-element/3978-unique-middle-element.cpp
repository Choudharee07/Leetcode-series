class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid = (nums.size()/2);
        int target = nums[mid];
        int count=0;
        for(int val:nums){
            if(val==target) count++;
            if(count==2) return false;
        }
        return true;
    }
};