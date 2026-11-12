class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0) {
            return false;
        }

        for (auto it = nums.begin(); it != nums.end() - 1; ++it) {
            int comp = *it;

            for (auto i_it = it + 1; i_it != nums.end(); ++i_it) {
                if (comp == *i_it) {
                    return true;
                }
            }
        }

        return false;
    }
};