class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(),nums.end());
        int maxi=-1;
        for(int val:nums){ 
            if(seen.count(-val)){
                maxi=max(maxi,val);
            }  
        }
        return maxi;
    }
};