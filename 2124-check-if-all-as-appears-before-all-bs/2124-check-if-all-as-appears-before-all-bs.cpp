class Solution {
public:
    bool checkString(string s) {
        bool seenB = false;
        for(char c:s){
            if(c=='b') seenB=true;
            if(c=='a' && seenB == true) return false;
        }
        return true;
    }
};