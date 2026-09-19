class Solution {
public:
    int numJewelsInStones(const string& jewels, const string& stones) {
        bool isJewel[128] = {false};
        for (char c : jewels) isJewel[c] = true;

        int answer = 0;
        for (char c : stones) answer += isJewel[c];
        return answer;
    }
};