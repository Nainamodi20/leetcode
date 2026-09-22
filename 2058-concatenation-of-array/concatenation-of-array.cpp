class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concent = nums;
        for (int i = 0; i < size(nums); i++){
            concent.push_back(nums[i]);
        }
        return concent;
    }
};