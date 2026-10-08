class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        int i = 0;
        int n = nums.size();

        for (int j = 0; j < n; j++) {
            //window cross hui to i change
            if (j - i > k) {
                window.erase(nums[i]);
                i++;
            }
            //mila to true
            if (window.find(nums[j]) != window.end()) {
                return true;
            }
            // nhi mila to add krte jao jab tk array chal rha
            window.insert(nums[j]);
        }
        return false;
    }
};