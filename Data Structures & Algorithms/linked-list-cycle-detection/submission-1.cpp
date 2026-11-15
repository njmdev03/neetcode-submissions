/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> visited;

        bool revisited = false;

        ListNode* curr = head;

        while (curr != nullptr && curr -> next != nullptr && !revisited) {
            if (visited.find(curr) != visited.end()) {
                revisited = true;
            } else {
                visited.insert(curr);
                curr = curr -> next;
            }
        }

        return revisited;
    }
};
