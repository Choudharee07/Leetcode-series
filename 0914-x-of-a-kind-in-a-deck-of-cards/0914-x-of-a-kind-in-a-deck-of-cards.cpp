class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> freq;
        for (int val : deck) freq[val]++;

        int g = 0;
        for (auto& [val, count] : freq) {
            g = gcd(g, count);
        }
        return g >= 2;
    }
};