class Solution {
public:
    int sum(int num){
        int sum=0;
        int digit;
        while(num!=0){
            digit = num%10;
            sum+=digit*digit;
            num/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int>seen;
        int val;
        while(n!=1){
            val = sum(n);
            if(seen.count(val)) return 0;
            else seen.insert(val);
            n=val;
        }
        return 1;  
    }
};