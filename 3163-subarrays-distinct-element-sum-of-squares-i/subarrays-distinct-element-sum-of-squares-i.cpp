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




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums = {1, 2, 1};
//     int n = nums.size();
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             unordered_set<int> sub;

//             for (int k = i; k <= j; k++) {
//                 sub.insert(nums[k]);
//                 cout << nums[k] << " ";
//             }

//             cout << endl;
//             cout << "Set: ";

//             for (auto x : sub) {
//                 cout << x << " ";
//             }

//             cout << "\n\n";
//             int diff = sub.size();
//             cout << "diff :" << diff;
//             cout << "\n";
//             count += diff*diff;
//         }
//     }
//     cout << count;
//     return 0;
// }