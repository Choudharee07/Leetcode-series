class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>check=nums;
        sort(check.begin(),check.end());
        int arr[101];
        fill(arr,arr+101,0);
        for(int i=1;i<check.size();i++){
            if(check[i]==check[i-1]) continue;
            arr[check[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            nums[i]= arr[val];
        }
        return nums;

    }
};