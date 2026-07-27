class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int nums1=1, nums2=1 ;
        for(int val:nums){
            if(val>=nums1){
                nums2=nums1;
                nums1=val;
            }else if(val<nums1 && val>nums2 ) nums2=val;
        } 
        return (nums1-1)*(nums2-1);
    }
};