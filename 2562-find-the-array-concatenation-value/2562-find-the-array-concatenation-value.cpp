class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long cat=0;
        int i=0;
        int j=nums.size()-1;
        string s1 ="";
        string s2= "";
        while(i<=j){
            if(i==j) {
                cat+=nums[i];
                break;
            }
            else{
                s1=to_string(nums[i]);
                s2=to_string(nums[j]);
                cat+= stoll(s1+s2);
                i++,j--;
            }
        }
        return cat;
    }
};