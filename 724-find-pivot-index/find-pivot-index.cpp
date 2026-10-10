class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for (int i = 0; i < size(nums); i++) {
            int leftsum = 0;
            for (int j = 0; j < i; j++) {
                leftsum += nums[j];
            }
            int rightsum = 0;
            for (int j = i + 1; j < size(nums); j++) {
                rightsum += nums[j];
            }
            if (leftsum == rightsum) {
                return i;
            }
        }
        return -1;
    }
};