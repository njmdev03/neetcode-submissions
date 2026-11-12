class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0) {
            return false;
        }

        for (int i = 0; i < nums.size() - 1; ++i) {
            int comp = nums.at(i);

            for (int j = i + 1; j < nums.size(); ++j) {
                if (comp == nums.at(j)) {
                    return true;
                }
            }
        }

        return false;
    }
};