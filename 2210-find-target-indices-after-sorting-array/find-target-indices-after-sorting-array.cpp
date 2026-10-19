class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> idx;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size(nums); i++){
            if(target == nums[i]){
                idx.push_back(i);
            }
        }
        return idx;
    }
};