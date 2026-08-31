class Solution {
public:
    bool isPalindrome(int x) {
        int original;
        long long reverse = 0;
        int remainder;
        original = x;
        while (x > 0) {
            remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x = x / 10;

        }
        // if (reverse == original)
        //     return true;
        // else
        //     return false;
        return reverse == original;
    }
};