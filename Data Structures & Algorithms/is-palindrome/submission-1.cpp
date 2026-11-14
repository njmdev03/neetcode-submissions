#define BETWEEN(val, min, max)  val >= min && val <= max

class Solution {
public:

    inline bool isAlphaNumeric(char c) {
        return BETWEEN(c, 'a', 'z') || BETWEEN(c, '0', '9');
    }

    inline char toLower(char c) {
        if (BETWEEN(c, 'A', 'Z')) {
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
