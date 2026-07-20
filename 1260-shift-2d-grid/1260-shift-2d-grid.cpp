class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int tempIn=grid[0][0];
        int shift = k % (m*n);
        int tempOut;
        for(int j=0;j<shift;j++){
            for(int i=1;i<m*n;i++){
                tempOut= grid[i/n][i%n];
                grid[i/n][i%n]= tempIn;
                tempIn=tempOut;
            }
            grid[0][0]=tempIn;
        }
        return grid;
    }
};