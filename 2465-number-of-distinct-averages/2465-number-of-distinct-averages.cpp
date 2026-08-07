class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        double avg;
        set<double>count;
        while(i<j){
            avg = (nums[i]+nums[j])/2.0;
            i++;
            j--;
            count.insert(avg);
        }
        return count.size();
    }
};