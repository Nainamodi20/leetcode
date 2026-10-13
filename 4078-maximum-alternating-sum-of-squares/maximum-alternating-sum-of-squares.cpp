class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> square;
        for (int x : nums)
            square.push_back(x * x);
        int n = nums.size();
        long long sum = 0;
        sort(square.begin(), square.end());
        for (int i = 0; i < size(square); i++) {
            if (i < n / 2) {
                sum -= (square[i]);
            } else
                sum += (square[i]);
        }
        return sum;
    }
};