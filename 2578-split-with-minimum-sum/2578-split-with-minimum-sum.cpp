class Solution {
public:
    int splitNum(int num) {
        int num1=0,num2=0;
        int freq[10]={0};
        while(num>0){
            freq[num%10]++;
            num/=10;
        }
        int ind =0;
        for(int i=0;i<10;i++){
            while(freq[i]--){
                if(ind %2==0){
                    num1 = num1*10+ i;
                }else{
                    num2 = num2*10+ i;
                }
                ind++;
            }
        }
        return num1+num2;
    }
};