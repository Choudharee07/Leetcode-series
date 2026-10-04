class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long sum = 0,i = 0, rem = k;
        for (int x : nums) {
            if (x <= i) continue;
            long long val = min(rem, (long long)x - i - 1);
            if (val > 0) {
                sum += (2*i + 1 + val) * val / 2;
                rem -= val;
            }
            i = x;
        }
        if (rem > 0) sum += (2*i + 1 + rem) * rem / 2;
    
        return sum;
    }
};