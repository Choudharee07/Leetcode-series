class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 =0,sum2=0;
        for(int val:nums){
            if(val<10) sum1+=val;
            else sum2+=val;
        }
        if(sum1>sum2 || sum2>sum1) return true;
        else return false;
        
    }
};