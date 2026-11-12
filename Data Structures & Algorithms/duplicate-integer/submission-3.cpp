class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> found;

        for (int i = 0; i < nums.size(); ++i) {
            if (found.find(nums.at(i)) != found.end()) {
                return true;
            }

            found.insert(nums.at(i));
        }

        return false;
    }
};