class Solution {
public:
    bool isAnagram(string s, string t) {
        // Can use an array backing for better space complexity.
        if (s.size() != t.size()) {
            return false;
        }

        // Count the characters in s
        int s_counts[26] = {0};
        int start_c = (int) 'a';

        for (auto it = s.begin(); it != s.end(); ++it) {
            s_counts[*it - start_c] += 1;
        }

        // Subtract the characters in t from s, if a count is 0 after this, 
        // that character is valid in an angram
        for (auto it = t.begin(); it != t.end(); ++it) {
            s_counts[*it - start_c] -= 1;

            if (s_counts[*it - start_c] < 0) {
                return false;
            }
        }

        // Sum the characters
        int sum = 0;
        for (int i = 0; i < 26; ++i) {
            sum += s_counts[i];
        }

        // If the total count is zero, the strings are anagrams
        return sum == 0;
    }
};
