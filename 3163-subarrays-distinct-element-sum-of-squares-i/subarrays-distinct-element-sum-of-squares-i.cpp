class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                unordered_set<int> sub;

                for (int l = i; l <= j; l++) {
                    sub.insert(nums[l]);
                }

                int distinct = sub.size();
                count += distinct * distinct;
            }
        }

        return count;
    }
};