class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dx0 = coordinates[1][0] - coordinates[0][0];
        int dy0 = coordinates[1][1] - coordinates[0][1];

        for (int i = 2; i < coordinates.size(); i++) {
            int dx = coordinates[i][0] - coordinates[i-1][0];
            int dy = coordinates[i][1] - coordinates[i-1][1];

            if (dx0 == 0 || dx == 0) {
                if (dx0 != dx) return false;   
                continue;                       
            }
            if ((double)dy / dx != (double)dy0 / dx0) return false;
        }
        return true;
    }
};