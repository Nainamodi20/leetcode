class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max2 = LLONG_MIN;
        long long max1 = LLONG_MIN;
        long long max3 = LLONG_MIN;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size(nums); i++) {
            if (nums[i] > max1) {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] > max2 && nums[i] != max1 && nums[i] != max3) {
                max3 = max2;
                max2 = nums[i];
            } else if (nums[i] > max3 && nums[i] != max1 && nums[i] != max2) {
                max3 = nums[i];
            } 
        }
        if(max3==LLONG_MIN)
        return max1;
        return max3;
    }
};