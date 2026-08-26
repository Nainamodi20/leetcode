class Solution {
public:
    bool checkDivisibility(int n) {
        int digit;
        int sum = 0;
        int product = 1;
        int a = n;
        while (n > 0) {
            digit = n % 10;
            sum = sum + digit;
            product = product * digit;
            n = n / 10;
        }
        if (a % (sum + product) == 0)
            return true;
        else
            return false;
        return 0;
    }
};