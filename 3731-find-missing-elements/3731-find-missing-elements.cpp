class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int len = nums.size();
        int mini = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());
        vector<int>answer;
        for(int i = mini;i<=max;i++){
            auto it = find(nums.begin(),nums.end(),i);
            if(it == nums.end()){
                answer.push_back(i);
            }
        }
        return answer;
    }
};