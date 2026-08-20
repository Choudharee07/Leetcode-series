class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string rev="";
        int i=0;
        
        while(i<s.length()){
            string word="";
            while(s[i]!=' ' && i<s.length()){
                word += s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            ans = ans + " " + word ;
            i++;
        }
        return ans.substr(1);
        
    }
};