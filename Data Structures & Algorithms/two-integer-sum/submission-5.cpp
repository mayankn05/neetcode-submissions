class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;  // val -> index

        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i;
        }

        //hashmap banaya sbko pass krke

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            // cout << indices.count(diff); 
            //if diff exists
            //indices[diff] != i //not the same index as the original number
            if (indices.count(diff) && indices[diff] != i) {
                return {i, indices[diff]};
            }
        }

        return {};
    }
};