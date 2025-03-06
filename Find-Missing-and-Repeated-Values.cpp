class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans = {0, 0};
        map<int, int> mpp;
        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid.size(); j++){
                mpp[grid[i][j]]++;
            }
        }
        int lastElem=0;
        for (auto it : mpp){
            if (it.second == 2) ans[0] = it.first;
            if (it.first != lastElem+1) ans[1] = it.first-1;
            lastElem = it.first;
        }
        if (ans[1]==0) ans[1] = grid.size()*grid.size();
        return ans;
    }
};