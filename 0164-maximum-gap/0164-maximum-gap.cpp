class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());


        if(nums.size()==1) return 0;
        int diff,maxi=0;
        for(int i=1;i<nums.size();i++){
            diff= nums[i]-nums[i-1];
            maxi = max(maxi,diff);
        }
        return maxi;
    }
};