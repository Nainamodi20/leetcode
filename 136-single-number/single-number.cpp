class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < size(nums); i++) {
            if (i % 2 == 0)
                sum += nums[i];
            if (i % 2 == 1)
                sum -= nums[i];
        }
        return sum;
    }
};