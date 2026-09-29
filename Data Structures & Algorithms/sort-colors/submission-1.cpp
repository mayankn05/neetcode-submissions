class Solution {
   public:
    void sortColors(vector<int>& nums) { countingSort(nums, nums.size()); }

    void countingSort(vector<int>& nums, int n) {
        vector<int> count(3);
        for (int x : nums){
            count[x]++;
        }

        int index = 0;
        for (int i = 0; i < 3; i++) {
            while (count[i]--) {
                nums[index++] = i;
            }
        }
    }
};