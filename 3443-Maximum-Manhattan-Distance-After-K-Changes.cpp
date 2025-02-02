class Solution {
public:
    int maxDistance(string s, int k) {
        int x = 0, y = 0;
        int maxDist = INT_MIN;
        for (int i=0; i<s.length(); i++){
            if (s[i]=='N'){
                y++;
            }
            else if (s[i]=='S'){
                y--;
            }
            else if (s[i]=='W'){
                x--;
            }
            else {
                x++;
            }
            int dist = abs(x) + abs(y);
            int curr = min(i+1, dist + 2*k);
            maxDist = max(maxDist, curr);
        }
        return maxDist;
    }
};