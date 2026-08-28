class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxCount = -1;
        int ans = INT_MAX;
        for (int i = 0; i < divisors.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) {
                    count++;
                }
            }
            if (count > maxCount || (count == maxCount && divisors[i] < ans)) {
                maxCount = count;
                ans = divisors[i];
            }
        }
        return ans;
    }
};