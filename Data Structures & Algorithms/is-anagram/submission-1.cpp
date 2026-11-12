class Solution {
private:
    unordered_map<char, int> getCharCounts(string s) {
        unordered_map<char, int> char_counts;

        for (auto it = s.begin(); it != s.end(); ++it) {
            if (char_counts.find(*it) != char_counts.end()) {
                char_counts.at(*it)++;
            } else {
                char_counts.insert({*it, 1});
            }
        }

        return char_counts;
    }
public:
    bool isAnagram(string s, string t) {
        auto s_counts = getCharCounts(s);
        auto t_counts = getCharCounts(t);

        if (s_counts.size() != t_counts.size()) {
            return false;
        }

        for (auto p = s_counts.begin(); p != s_counts.end(); ++p) {
            if (t_counts.find(p -> first) == t_counts.end() || 
                t_counts.at(p -> first) != p -> second) {
                    return false;
            }
        }

        return true;
    }
};
