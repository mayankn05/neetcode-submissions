class Solution {
public:

//2 ptr
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;

        while (l < r) {
            int curSum = numbers[l] + numbers[r];

            if (curSum > target) {
                r--;
            } else if (curSum < target) {
                l++;
            } else {
                return { l + 1, r + 1 };
            }
        }
        return {};
    }
};


// class Solution {
// public:
// //brute force
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         for (int i = 0; i < numbers.size(); i++) {
//             for (int j = i + 1; j < numbers.size(); j++) {
//                 if (numbers[i] + numbers[j] == target) {
//                     return { i + 1, j + 1 };
//                 }
//             }
//         }
//         return {};
//     }
// };