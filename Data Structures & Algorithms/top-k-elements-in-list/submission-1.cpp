class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //store everything
        unordered_map<int,int> count;
        for(int num : nums){
            count[num]++;
        }

        //map of size +1 as for nums[6] a number can be max 6 times which would be freq[6] so size of freq needs to be 7
        vector<vector<int>> freq(nums.size() + 1);
        for(const auto& entry : count) {
            freq[entry.second].push_back(entry.first);
        }

        //pushback from reverse order till k numbers are popped
        vector<int> res;
        for(int i = freq.size()-1; i > 0; --i){
            for(int n: freq[i]){
                res.push_back(n);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
