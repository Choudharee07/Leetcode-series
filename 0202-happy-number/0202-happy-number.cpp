class Solution {
public:
    int sum(int num){
        int total = 0;
        while (num) {
            int d = num % 10;
            total += d * d;
            num /= 10;
        }
        return total;
    }

    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
            slow = sum(slow);
            fast = sum(sum(fast));
        } while (slow != fast);
        return slow == 1;
    }
};