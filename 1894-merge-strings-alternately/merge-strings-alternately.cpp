class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int first = 0;
        int end = 0;
        string res = "";
        while (first < word1.length() && end < word2.length()) {
            res += word1[first++];
            res += word2[end++];
        }
        while (first < word1.length()) {
            res += word1[first];
            first++;
        }
        while (end < word2.length()) {
            res += word2[end];
            end++;
        }
        return res;
    }
};