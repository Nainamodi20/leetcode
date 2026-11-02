class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = size(s);
        int start = 0;
        int end = n - 1;
        //for (int i = 0; i < size(s); i++) {
            while (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
          //  }
        }
    }
};