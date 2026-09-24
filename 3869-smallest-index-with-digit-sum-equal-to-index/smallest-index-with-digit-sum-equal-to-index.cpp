class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < size(nums); i++){
            int digitsum = 0;
            while(nums[i] > 0){
                digitsum += nums[i] % 10;
                nums[i] /= 10;
            }
            if(digitsum == i){
                return i;
        }
            } return -1;
    }
};