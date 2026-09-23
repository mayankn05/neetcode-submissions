class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for (auto s : strs) {

            //count each char freq - character hashing
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            
            //make the char freq a string
            string key = to_string(count[0]);
            for (int i = 1; i < 26; i++) {
                key += ',' + to_string(count[i]);
            } 

            //map key with original strings
            res[key].push_back(s); 
        }

        //similar way to push to result as first aproach
        vector<vector<string>> result;
        for (auto pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};
