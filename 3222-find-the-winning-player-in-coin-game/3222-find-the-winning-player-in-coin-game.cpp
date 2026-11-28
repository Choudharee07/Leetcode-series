class Solution {
public:
    string winningPlayer(int x, int y) {
        y/=4;
        int name=min(x,y);
        if(name%2) return "Alice" ;
        return "Bob";
    }
};