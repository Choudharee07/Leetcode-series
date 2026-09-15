class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        if(s.length()!=t.length()) return false;
        for(char c :t){
            freq[c]++;
        }
        for(char c:s){
            if(freq.count(c) && freq[c]>0) freq[c]--;
            else return false;
        }
        return true;
    }
};