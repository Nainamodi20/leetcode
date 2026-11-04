class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = size(nums);
        int moves = 0;
        int diff = 0;
        int medium = 0;
        sort(nums.begin(), nums.end());
        if (n % 2 == 0) {
            medium = nums[(n / 2) - 1];
        }
        if (n % 2 == 1) {
            medium = nums[n / 2];
        }
        if (n < 2){
            return 0;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == medium){
                continue;
            }
            if (nums[i] < medium) {
                diff = medium - nums[i];
            }
            if (nums[i] > medium) {
                diff = nums[i] - medium;
            }
            moves += diff;
        }
        return moves;
    }
};