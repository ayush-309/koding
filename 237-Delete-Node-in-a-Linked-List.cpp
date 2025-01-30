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
    void deleteNode(ListNode* node) {
        node->val = node->next->val; // store value of next node in the current node
        ListNode *temp = node->next; // store next node in a temp node
        node->next = node->next->next; // skip the next node 
        delete temp; // delete the temp node
    }
};