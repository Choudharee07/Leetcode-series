class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int val : nums) {
            if (!seen.insert(val).second)
                return true;
        }
        return false;
    }
};