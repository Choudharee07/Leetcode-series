class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size() - 1;
        if (len == 0) return nums[0];   

        int sum = 0;
        if (nums[0] != nums[1]) sum += nums[0];
        for (int i = 1; i < len; i++) {
            if (nums[i] == nums[i-1] || nums[i] == nums[i+1]) continue;
            sum += nums[i];
        }
        if (nums[len] != nums[len-1]) sum += nums[len];
        return sum;
    }
};