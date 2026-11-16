class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> match;
        match.insert({')', '('});
        match.insert({']', '['});
        match.insert({'}', '{'});

        stack<char> order;

        for (auto it = s.begin(); it != s.end(); ++it) {
            if (*it == '(' || *it == '[' || *it == '{') {
                order.push(*it);
            } else if (*it == ')' || *it == ']' || *it == '}') {
                auto m = match.find(*it);

                if (order.size() != 0 && m -> second == order.top()) {
                    order.pop();
                } else {
                    return false;
                }
            }
        }

        return order.size() == 0;
    }
};
