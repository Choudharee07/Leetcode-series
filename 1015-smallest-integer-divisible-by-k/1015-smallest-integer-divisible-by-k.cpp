class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) return -1; 
        long long rem = 1 % k;
        int count = 1;
        while (rem != 0) {
            rem = (rem * 10 + 1) % k;
            count++;
        }
        return count;
    }
};