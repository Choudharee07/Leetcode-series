class Solution {
public:
    int digitSum(int num){
        int sum=0;
        while(num!=0){
            sum += num%10;
            num/=10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int digit=0,num;
        for(char c:s){
            num= c-'a'+1;
            if(num<10) digit+=num;
            else{
                digit += digitSum(num);
            }
        }
        k--;
        while(k!=0){
            digit=digitSum(digit);
            k--;
        }
        return digit;
           
    }
};