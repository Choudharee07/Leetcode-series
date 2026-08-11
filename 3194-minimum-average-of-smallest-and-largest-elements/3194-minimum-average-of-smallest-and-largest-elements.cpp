class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float>average;
        sort(nums.begin(),nums.end());
        float min,max;
        int i=0;
        int j= nums.size()-1;
        while(i<j){
            min= nums[i];
            max = nums[j];
            average.push_back((min+max)/2.0);
            i++;
            j--;
        }
        return *min_element(average.begin(),average.end());
    }
};