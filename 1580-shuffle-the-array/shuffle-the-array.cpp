class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums1;
        int left = 0;
        int right = n;
        for (int i = 0; i < size(nums); i++)
        {
            while (left < n && right < size(nums)){
                nums1.push_back(nums[left]);
                nums1.push_back(nums[right]);
                left += 1;
                right += 1;
            }
        }
        return nums1;
        }
  };