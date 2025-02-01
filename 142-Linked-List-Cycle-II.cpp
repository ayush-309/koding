/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool haveMet = false;
        while (fast != NULL && fast->next != NULL) {
            if (haveMet) {
                if (slow == fast) {
                    return slow;
                }
                slow = slow->next;
                fast = fast->next;
            } else {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast) {
                    slow = head;
                    haveMet = true;
                }
            }
        }
        return NULL;
    }
};