class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos =0;
        int neg=0;
        for(int val:nums){
            if(val<0) neg++;
            else if(val>0) pos++;
        }
        return max(pos,neg);
    }
};