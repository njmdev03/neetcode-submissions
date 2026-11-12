class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> found;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums.at(i);

            if (found.find(num) != found.end()) {
                return true;
            }

            found.insert(num);
        }

        return false;
    }
};