class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long place = 1;
        long long x = 0;
        while (n > 0) {
            long long digit = n % 10;
            x = x + digit;
            if (digit != 0) {
                sum = sum + digit * place;
                place *= 10;
            }
            n /= 10;
        }
        return sum * x;
    }
};