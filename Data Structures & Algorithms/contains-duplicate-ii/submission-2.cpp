class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> indexOf;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if(
                indexOf.find(nums[i]) != indexOf.end() 
            && 
            i - indexOf[nums[i]] <= k
            ) {
                return true;
            }
            indexOf[nums[i]] = i;
        }
        return false;
    }
};