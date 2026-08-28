class Solution {
public:
    int minMoves(vector<int>& nums) {
        int target = *max_element(nums.begin(),nums.end());
        int count = 0 ;
        for(int val:nums){
            count += target-val;
        }
        return count;        
    }
};