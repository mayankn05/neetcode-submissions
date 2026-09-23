class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for (string s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());  // sort all

            res[sortedS].push_back(s);  // map original with sorted value
        }

        vector<vector<string>> result;
        for (auto pair : res) {
            result.push_back(pair.second);  // return all original values as sublist
        }
        return result;
    }
};
