class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;

        for (int i = 0; i< nums.size(); ++i) {
            num_map.insert({nums[i], i});
        }

        for (int i = 0; i< nums.size(); ++i) {
            auto num = num_map.find(target - nums[i]);

            if (num != num_map.end() && num -> second != i) {
                if (i < num -> second) {
                    return {i, num -> second};
                } else {
                    return {num -> second, i};
                }
                
            }
        }

        return {-1, -1};
    }
};
