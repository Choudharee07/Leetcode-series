class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char c = coordinates[0];
        int val = coordinates[1]-'0';
        if((c+val)%2==0) return false;
        return true;
        
    }
};