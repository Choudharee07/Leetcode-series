class Solution {
public:
    bool isPalindrome(string s) {
        int end = s.length()-1;
        int start=0;
        while(start< end){
            if(!isalnum(s[start])) start++;
            else if(!isalnum(s[end])) end--;
            else if(tolower(s[start])==tolower(s[end])){
                start++;
                end--;
            }else{
                return 0;
            }
        }
        return 1;
        
        
    }
};