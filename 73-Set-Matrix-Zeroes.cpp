class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int, int>> indices;
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (matrix[i][j]==0){
                    indices.push_back({i, j});
                }
            }
        }
        for (auto it : indices){
            for (int i=0; i<n; i++){
                matrix[it.first][i]=0;
            }
            for (int j=0; j<m; j++){
                matrix[j][it.second]=0;
            }
        }
    }
};