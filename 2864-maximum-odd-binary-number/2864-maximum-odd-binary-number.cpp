class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') count++;
        }
        int zero = s.length()-count;
        return string(count-1,'1') + string(zero,'0') + "1";        
    }
};