class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int i=num;
        while(i>0){
            if(num % (i%10)==0) count++;
            i/=10;
        } 
        return count; 
    }
};