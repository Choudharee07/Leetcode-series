class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s: words){
            int i=0;
            int j = s.length()-1;
            if(j==0) return s;
            while(i<j){
                if(s[i]==s[j]) i++,j--;
                else break;
                if(i>=j) return s;
            }
        }
        return "";
        
    }
};