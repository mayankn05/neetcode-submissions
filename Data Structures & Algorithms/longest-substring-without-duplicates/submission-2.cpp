//too slow
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int res = 0;
//         int len = s.size();
//         for (int i = 0; i < len; i++) {
//             unordered_set<char> charSet;
//             for (int j = i; j < len; j++) {
//                 if (charSet.find(s[j]) != charSet.end()) {
//                     break;
//                 }
//                 charSet.insert(s[j]);
//             }
//             res = max(res, (int)charSet.size());
//         }
//         return res;
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int l = 0, res = 0;
        int len = s.size();

        for (int r = 0; r < len; r++) {
            while (charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};