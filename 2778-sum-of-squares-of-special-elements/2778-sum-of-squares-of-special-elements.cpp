class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int len = nums.size();
        int ans=0;
        for(int i=1;i<=len;i++){
            if(len%i==0){
                ans += (nums[i-1]*nums[i-1]);
            }
        }
        return ans;
    }
};