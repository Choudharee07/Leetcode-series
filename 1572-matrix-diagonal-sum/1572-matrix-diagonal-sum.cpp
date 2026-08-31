class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int row=mat.size();
        int col = mat[0].size();
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            sum+=mat[i][col-i-1];
        }
        if(row%2==1){
            sum -= mat[row/2][row/2];
        }
        return sum;
    }
};