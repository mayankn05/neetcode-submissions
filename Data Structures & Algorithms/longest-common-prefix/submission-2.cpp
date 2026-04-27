class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) {
            return strs[0];
        }

        sort(strs.begin(), strs.end());
        string firstString = strs[0];
        string lastString = strs.back();
        for (int i = 0; i < min(firstString.length(), lastString.length()); i++) {
            if (firstString[i] != lastString[i]) {
                return firstString.substr(0, i);
            }
        }
        return strs[0];
    }
};