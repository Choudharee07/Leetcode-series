class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>s1;
        map<char,int>s2;
        for(char c:ransomNote) s1[c]++;
        for(char c:magazine) s2[c]++;
        for(auto & [character,count]:s1){
            if(s1[character]>s2[character]) return false;
        }
        return true;
    }
};