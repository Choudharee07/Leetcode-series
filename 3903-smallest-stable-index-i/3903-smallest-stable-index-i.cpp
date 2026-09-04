class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int max = nums[0];
        int mini = *min_element(nums.begin(),nums.end());
        int  ind;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max) max=nums[i];
            if(max-mini<=k) return i;
            if(nums[i]==mini && i<nums.size()-1){
                mini = *min_element(nums.begin()+i+1,nums.end());
            }   
        }
        return -1;
        
    }
};