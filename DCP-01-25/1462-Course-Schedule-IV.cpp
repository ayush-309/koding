class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
    vector<vector<bool>> reachable(numCourses, vector<bool>(numCourses, false));
    
    for (const auto& pre : prerequisites) {
        reachable[pre[0]][pre[1]] = true;
    }
    
    for (int k = 0; k < numCourses; ++k) {
        for (int i = 0; i < numCourses; ++i) {
            for (int j = 0; j < numCourses; ++j) {
                reachable[i][j] = reachable[i][j] || (reachable[i][k] && reachable[k][j]);
            }
        }
    }
    
    vector<bool> result;
    for (const auto& query : queries) {
        result.push_back(reachable[query[0]][query[1]]);
    }
    
    return result;
}
};