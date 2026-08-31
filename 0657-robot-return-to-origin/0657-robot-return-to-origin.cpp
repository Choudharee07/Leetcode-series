class Solution {
public:
    bool judgeCircle(string moves) {
        int vert =0;
        int hori =0;
        for(char c :moves){
            if(c == 'U') vert++;
            else if(c=='D') vert--;
            else if(c=='R') hori++;
            else if(c=='L') hori--;
        }
        return (vert ==0 && hori ==0);
    }
};