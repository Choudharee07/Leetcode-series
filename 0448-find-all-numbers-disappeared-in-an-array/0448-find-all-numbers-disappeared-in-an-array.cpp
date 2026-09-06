class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n+1,0);
        vector<int>ans;
        for(int val:nums){
            arr[val]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(arr[i]==0) ans.push_back(i);
        }
        return ans;
    }
};