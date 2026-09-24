class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        //sort ascending
        sort(nums.begin(), nums.end()); 

        int count = 1;
        int res = 1;

        //check if next is 1 bigger - count++
        //same - continue
        //bigger than 1 - update res and restart counter
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] == 1) {
                count++;
            } 
            else if (nums[i + 1] == nums[i]) {
                continue;
            } 
            else {
                res = max(count, res);
                count = 1;
            }
        }
        //important
        res = max(count, res);
        return res;
    }
};