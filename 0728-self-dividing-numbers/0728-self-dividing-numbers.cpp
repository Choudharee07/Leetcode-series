class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        int num;
        for(int i = left; i<=right;i++){
            num=i;
            while(num>0 && num%10!=0){
                if(i%(num%10)==0){
                    num/=10;
                }
                else break;
                if(num==0) ans.push_back(i);
            }
        }
        return ans;
    }
};