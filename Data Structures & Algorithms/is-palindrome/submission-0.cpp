class Solution {
public:
    inline bool between(char val, char min, char max) {
        return val >= min && val <= max;
    }

    inline bool isAlphaNumeric(char c) {
        return between(c, 'a', 'z') || between(c, '0', '9');
    }

    inline char toLower(char c) {
        if (between(c, 'A', 'Z')) {
            return (char) (c + ('a' - 'A')) ;
        } else {
            return c;
        }
    }

    bool isPalindrome(string s) {
        int leftIdx = 0;
        int rightIdx = s.size() - 1;

        while (leftIdx < rightIdx) {
            char left = toLower(s.at(leftIdx));
            char right = toLower(s.at(rightIdx));

            if ( !isAlphaNumeric(left) ) {
                ++leftIdx;
                continue;
            }

            if ( !isAlphaNumeric(right) ) {
                --rightIdx;
                continue;
            }

            if (left != right) {
                return false;
            } else {
                ++leftIdx;
                --rightIdx;
            }
        }

        return true;
    }
};
