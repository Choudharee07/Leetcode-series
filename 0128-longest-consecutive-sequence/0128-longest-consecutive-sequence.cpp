class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0;
        unordered_set<int>seen(nums.begin(),nums.end());
        for(int val:seen){
            if(seen.count(val-1)) continue;
            int i=1;
            if(seen.count(val+1)){
                while(seen.count(val+i)) i++;
            }
            maxi=max(i,maxi);
        }
        return maxi;
    }
};