class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum=0;
        int start;
        for(int i=0;i<nums.size();i++){
            start= nums[i]<i?i-nums[i]:0;
            for(int j=start;j<=i;j++){
                sum+=nums[j];
            }
        }
        return sum;
    }
};