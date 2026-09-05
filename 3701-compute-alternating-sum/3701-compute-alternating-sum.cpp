class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int i=0;
        for(int val:nums){
            if(i%2==0) sum+=val;
            else sum-=val;
            i++;
        }
        return sum;
    }
};