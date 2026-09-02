class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int a=0,b=0,ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=a && nums[i]>=b) b=a,a=nums[i],ans=i;
            else if(nums[i]<a && nums[i]>=b) b=nums[i];
        }
        if(a>=b*2) return ans;
        else return -1;
        
    }
};