class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> found;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < found.size(); ++j) {
                if (nums.at(i) == nums.at(j)) {
                    return true;
                }
            }

            found.push_back(nums.at(i));
        } 

        return false;
    }
};