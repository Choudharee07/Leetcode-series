class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp=n,i=n;
        int pro=1;
        while(temp>0){ 
            pro *= temp%10;
            temp /=10;
            if(temp==0 && pro %t==0) return i;
            else if (temp ==0){
                i++;
                temp=i;
                pro=1;
            }
        }
        return 1;
    }
};