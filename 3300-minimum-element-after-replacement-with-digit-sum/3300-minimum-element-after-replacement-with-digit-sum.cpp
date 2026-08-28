class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int val : nums){
            int sum = 0;
            while(val != 0){
                sum += val % 10;
                val /= 10;
            }
            mini = min(mini, sum);
        }
        return mini;
    }
};