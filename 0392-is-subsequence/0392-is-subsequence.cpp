class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s.length()==0) return 1;
        else if(s.length()!= 0 && t.length()==0) return 0;
        while(i<s.length()){
            if(s[i]==t[j]) i++,j++;
            else j++;
            if(i!=s.length() && j==t.length()) return 0;
        }
        return 1;
    }
};