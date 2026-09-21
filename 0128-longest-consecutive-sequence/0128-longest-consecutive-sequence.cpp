class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0;
        unordered_set<int>seen(nums.begin(),nums.end());
        for(int val:seen){
            if(seen.count(val-1)) continue;
            int count=1;
            if(seen.count(val+1)){
                int i=1;
                while(seen.count(val+i)) count++,i++;
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};