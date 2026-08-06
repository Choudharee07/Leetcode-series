class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0,j=1;
        vector<int>answer(nums.size());
        for(int val:nums){
            if(val%2==0) answer[i]=val, i+=2;
            else answer[j]=val,j+=2;
        }
        return answer;
    }
};