class Solution {
public:
    bool areOccurrencesEqual(string s){
        unordered_map<char,int> freq;
        for(char sub:s){
            freq[sub]++;
        }
        int val = freq[s[0]];
        for(const auto&[alpha,count]:freq){
            if(val != count) return false;
        }
        return true;

    }
};