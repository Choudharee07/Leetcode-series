class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            int count = 0;
            long long sum = 0;
            for (int i = 1; (long long)i * i <= val; i++) {
                if (val % i == 0) {
                    int other = val / i;
                    if (other == i) {
                        count++;
                        sum += i;
                    } else {
                        count += 2;
                        sum += i + other;
                    }
                }
            }
            if (count == 4) ans += sum;
        }
        return ans;
    }
};