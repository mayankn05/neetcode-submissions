class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i = nums.size();
        vector<int> arr(2*i);
        for(int j = 0; j < i; j++){
            arr[j] = nums[j];
            arr[i+j] = nums[j];
        }
        return arr;
    }
};