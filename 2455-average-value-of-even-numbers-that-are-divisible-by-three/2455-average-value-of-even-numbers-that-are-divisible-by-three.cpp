class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0,count=0;
        for(int val:nums){
            if(val%6==0) sum+=val,count++;
        }
        if(count==0) return 0;
        return sum/count;
    }
};