class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> uni;
        for (int i = 0; i < size(digits); i++) {
            for (int j = 0; j < size(digits); j++) {
                for (int k = 0; k < size(digits); k++) {
                    if (i != j && j != k && i != k && digits[k] % 2 == 0 && digits[i] != 0){
                        uni.insert(digits[i] * 100 + digits[j] * 10 + digits[k]);
                    }
                    
                }
            }
        }
    return uni.size();
    }
};