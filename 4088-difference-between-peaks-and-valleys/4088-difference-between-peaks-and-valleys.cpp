class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peakSum=0,vallySum=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]< nums[i-1] && nums[i]<nums[i+1]) vallySum+=nums[i];
            else if(nums[i]> nums[i-1] && nums[i]>nums[i+1]) peakSum+=nums[i];
        }
        return peakSum-vallySum;
        
    }
};