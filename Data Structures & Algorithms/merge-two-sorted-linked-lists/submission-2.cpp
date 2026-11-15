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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }

        ListNode* node1 = list1;
        ListNode* node2 = list2;

        ListNode* head = nullptr;

        if (node1 != nullptr && node2 != nullptr && node1 -> val <= node2 -> val) {
            head = node1;
            node1 = node1 -> next;
        } else if (node2 != nullptr) {
            head = node2;
            node2 = node2 -> next;
        } else {
            head = node1;
            node1 = node1 -> next;
        }

        ListNode* curr = head;

        while (node1 != nullptr && node2 != nullptr) {
            if (node1 -> val <= node2 -> val) {
                curr -> next = node1;
                
                curr = node1;
                node1 = node1 -> next;
            } else {
                curr -> next = node2;
                    
                curr = node2;
                node2 = node2 -> next;
            }
        }

        if (node1 != nullptr) {
            curr -> next = node1;
        } else if (node2 != nullptr) {
            curr -> next = node2;
        }

        return head;
    }
};
