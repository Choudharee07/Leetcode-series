class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        int freq[10]={0};
        while(n>0){
            freq[n%10]++;
            n/=10;
        }
        for(int i=0;i<10;i++){
            sum +=(freq[i]*i);
        }
        return sum;
    }
};