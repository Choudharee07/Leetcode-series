class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(),nums.end());
        int avg = accumulate(nums.begin(),nums.end(),0)/(int)nums.size();
        if(avg<0) avg=0;
        while(true){
            avg++;
            if(!seen.count(avg)) return avg;
        }
        return -1;   
    }
};