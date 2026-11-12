class Solution {
public:
    bool isAnagram(string s, string t) {
        // Only need to count the first string, then the second can decrement in place
        if (s.size() != t.size()) {
            return false;
        }

        // Count the characters in s
        unordered_map<char, int> s_counts;

        for (auto it = s.begin(); it != s.end(); ++it) {
            auto item = s_counts.find(*it);

            if (item != s_counts.end()) {
                ++(item -> second);
            } else {
                s_counts.insert({*it, 1});
            }
        }

        // Subtract the characters in t from s, if a count is 0 after this, 
        // that character is valid in an angram
        for (auto it = t.begin(); it != t.end(); ++it) {
            auto item = s_counts.find(*it);

            if (item != s_counts.end()) {
                if (--(item -> second); (item -> second) < 0) {
                    return false;
                }
            } else {
                // This character in t was not found in s
                //   thus t can not be an angram with s
                // or there were more of this character in t than s
                return false;
            }
        }

        // Sum the characters
        int sum = 0;
        for (auto it = s_counts.begin(); it != s_counts.begin(); ++it) {
            sum += it -> second;
        }

        // If the total count is zero, the strings are anagrams
        return sum == 0;
    }
};
