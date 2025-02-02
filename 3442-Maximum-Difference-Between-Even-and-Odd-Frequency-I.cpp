class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mpp;
        for (int i=0; i<s.length(); i++){
            mpp[s[i]]++;
        }
        int maxOdd = INT_MIN, minEven = INT_MAX;
        for (auto it : mpp){
            if (it.second%2==0){
                minEven = min(minEven, it.second);
            } else {
                maxOdd = max(maxOdd, it.second);
            }
        }
        return maxOdd - minEven;
    }
};