class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> found;

        for (auto it = nums.begin(); it != nums.end(); ++it) {
            int num = *it;

            if (found.find(num) != found.end()) {
                return true;
            }

            found.insert(num);
        }

        return false;
    }
};