class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = INT_MIN;
        int freq=0;
        for(int val:nums){
            if(val==1) freq++;
            else freq =0;
            maxi = max(maxi,freq);
        }
        return maxi;
    }
};