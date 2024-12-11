class Solution {
public:
    bool isPalindrome(string s) {
        string newStr;
        for (int i=0; i<s.length(); i++){
            if (isalnum(s[i])){
                newStr.push_back(s[i]);
            }
        }
        int start=0, end=newStr.length()-1;
        while(start<end){
            if (tolower(newStr[start])!=tolower(newStr[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};