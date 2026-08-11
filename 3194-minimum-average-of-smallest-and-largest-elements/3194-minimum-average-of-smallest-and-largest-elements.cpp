class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float>average;
        while(!empty(nums)){
            float min = *min_element(nums.begin(),nums.end());
            float max = *max_element(nums.begin(),nums.end());
            average.push_back((min+max)/2.0);
            auto it = find(nums.begin(),nums.end(),min);
            nums.erase(it);
            auto iit = find(nums.begin(),nums.end(),max);
            nums.erase(iit);
        }
        return *min_element(average.begin(),average.end());
    }
};