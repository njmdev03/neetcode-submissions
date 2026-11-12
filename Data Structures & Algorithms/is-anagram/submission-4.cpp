class Solution {
private:
    void getCharCounts(unordered_map<char, int>& char_counts, string& s) {
        for (auto it = s.begin(); it != s.end(); ++it) {
            auto item = char_counts.find(*it);

            if (item != char_counts.end()) {
                ++ item -> second;
            } else {
                char_counts.insert({*it, 1});
            }
        }
    }

    void printMap(unordered_map<char, int>& m) {
        cout << "{" << endl;
        for (auto it = m.begin(); it != m.end(); ++it) {
            cout << "    " << it -> first << ": " << it -> second << endl;
        }

        cout << "}" << endl;
    }

public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_counts;
        unordered_map<char, int> t_counts;

        getCharCounts(s_counts, s);
        getCharCounts(t_counts, t);

        // printMap(s_counts);
        // printMap(t_counts);

        if (s_counts.size() != t_counts.size()) {
            return false;
        }

        for (auto p = s_counts.begin(); p != s_counts.end(); ++p) {
            auto t_item = t_counts.find(p -> first);

            if (t_item == t_counts.end() || t_item -> second != p -> second) {
                return false;
            }
        }

        return true;
    }
};
