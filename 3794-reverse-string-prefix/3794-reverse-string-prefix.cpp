class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans="";
        for(int i=k-1;i>=0;i--){
            ans +=s[i];
        }
        return ans + s.substr(k);
    }
};