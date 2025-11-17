class Solution {
public:
    bool isVowel(char a) {
        return (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' ||
                a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U');
    }
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (isVowel(s[i]) && isVowel(s[j])){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
            else if (isVowel(s[i])) j--;
            else if (isVowel(s[j])) i++;
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};