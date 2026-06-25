class Solution {
public:
    char findTheDifference(string s, string t) {
        int sSum=0,tSum=0;
        for(char c:s){
            sSum+=c;
        }
        for(char c:t){
            tSum+=c;
        }
        char ans= tSum-sSum;
        return ans;
        
    }
};