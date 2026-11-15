class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int arr[102]={0};
        for(int val:nums) arr[val+1]++; 
        for(int i=1;i<102;i++) arr[i]+=arr[i-1];
        for(int i=0;i<nums.size();i++) nums[i]=arr[nums[i]];
        return nums;

    }
};