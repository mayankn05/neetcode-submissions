class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //store everything
        unordered_map<int,int> count;
        for(int num : nums){
            count[num]++;
        }

        //map based on count - count cannot be more than nums.size 
        //if 6 digits in nums - max count cannot be more than 6
        vector<pair<int,int>> arr;
        for(const auto& p: count){
            arr.push_back({p.second, p.first});
        }

        //sort reverse
        sort(arr.rbegin(), arr.rend());

        //extract k
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};
