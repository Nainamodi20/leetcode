class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0];
        int total = nums[0];
        for (int i = 1; i < size(nums); i++) {
            current = max(nums[i], current + nums[i]);
            total = max(total, current);
        }
        return total;
    }
};