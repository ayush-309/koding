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
        ListNode* first = list1;
        ListNode* second = list2;
        ListNode* head;

        if (!first) return second;
        if (!second) return first;
        if (first && second) {
            if (first->val <= second->val) {
                head = first;
                first = first->next;
            } else {
                head = second;
                second = second->next;
            }
        }

        ListNode* mover = head;

        while (first && second) {
            if (first->val <= second->val) {
                mover->next = first;
                first = first->next;
            } else {
                mover->next = second;
                second = second->next;
            }
            mover = mover->next;
        }
        if (first) {
            mover->next = first;
        }
        if (second) {
            mover->next = second;
        }

        return head;
    }
};