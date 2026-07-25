class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x =0, i = 1;
        int sum=0;
        while(n>0){
            if(n%10!=0){
                x = (n%10)*i + x;
                i*=10;
                sum+=n%10;    
            }
            n/=10;
        }
        return sum*x;
    }
};