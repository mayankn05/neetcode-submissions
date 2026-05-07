class Solution {
public:
//iterate
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0;
        for(int num: nums){
            if(num == 0){
                maxCount = max(count, maxCount);
                count = 0;
            } else {
                count++;
            }
        }
        return max(count,maxCount);
    }
};