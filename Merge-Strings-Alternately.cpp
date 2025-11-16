class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        auto it1 = word1.begin();
        auto it2 = word2.begin();
        while (it1 != word1.end() && it2 != word2.end()){
            ans.push_back(*it1);
            ans.push_back(*it2);
            it1++; it2++;
        }
        while (it1 != word1.end()){
            ans.push_back(*it1);
            it1++;
        }
        while (it2 != word2.end()){
            ans.push_back(*it2);
            it2++;
        }

        return ans;
    }
};