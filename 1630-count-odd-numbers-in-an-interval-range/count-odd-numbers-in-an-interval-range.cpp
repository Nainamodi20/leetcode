class Solution {
public:
    int countOdds(int low, int high) {
        int res = high - low + 1;
        if (high % 2 == 0) {
            return res / 2;
        }
        if (low % 2 == 1) {
            return (res / 2 + 1);
        }
        
        return res/2;
    }
};