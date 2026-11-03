class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0;
        int diff = 0;
        int maxim = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < size(nums); i++) {
            diff = maxim - nums[i];
            moves += diff;
        }
        return moves;
    }
};