class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> vectorMap ;

        for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (vectorMap.find(complement) != vectorMap.end()) {
            return {vectorMap[complement], i};
        }

        vectorMap[nums[i]] = i;
    }
    return {};
    }
};
