class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        for(int val:nums1){
            if(val%2!=0) return 1;
            else continue;
        }    
        return 1;
    }
};