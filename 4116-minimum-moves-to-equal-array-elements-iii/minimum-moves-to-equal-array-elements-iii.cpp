class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0;
        int i = 0;
        int maxim = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < size(nums); i++) {
            while (nums[i] < maxim) {
                nums[i]++;
                moves++;
            }
        }
        return moves;
    }
};