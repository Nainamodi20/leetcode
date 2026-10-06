class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < size(nums); i++) {
            if (nums[i] != max && max < nums[i]*2)
                return -1;
        }
        for(int i = 0; i < size(nums); i++){
            if(nums[i] == max)
            return i;
        }
        return 0;
    }
};