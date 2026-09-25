class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = size(accounts);
        int n = size(accounts[0]);
        int sum = 0;
        for (int i = 0; i < m; ++i) {
        int current = 0;
            for (int j = 0; j < n; ++j) {
                current += accounts[i][j];
                if (sum < current) {
                    sum = current;
                }
            }
        }
        return sum;
        return 0;
    }
};