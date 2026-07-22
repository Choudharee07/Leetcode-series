class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=0;
        int y=n;
        vector<int>ans;
        while(x<n){
            ans.push_back(nums[x]);
            x++;
            ans.push_back(nums[y]);
            y++;
        }
        return ans;
    }
};