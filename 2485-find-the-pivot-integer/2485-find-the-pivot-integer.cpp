class Solution {
public:
    int pivotInteger(int n) {
        int start=1;
        int end = n;
        int sum1=1,sum2=n;
        while(start<=end){
            if(sum1<sum2){
                start++;
                sum1+=start;
            }
            else if(sum1==sum2 && start==end) {
                return start;   
            }
            else{
                end--;
                sum2+=end;
            }
        }
        return -1;
    }
};