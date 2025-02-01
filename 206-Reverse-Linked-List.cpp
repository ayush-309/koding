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
    // Iterative approach

    // ListNode* reverseList(ListNode* head) {
    //     ListNode* curr = head;
    //     ListNode* back = NULL;
    //     ListNode* front = curr;

    //     while (curr != NULL) {
    //         front = curr->next;
    //         curr->next = back;
    //         back = curr;
    //         curr = front;
    //     }
    //     return back;
    // }

    // Recursive approach

    ListNode *recursiveApproach(ListNode *curr,ListNode *back, ListNode *front){
        if (curr==NULL){
            return back;
        }
        front = curr->next;
        curr->next = back;
        back = curr;
        curr = front;
        return recursiveApproach(curr, back, front);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head;
        ListNode *back = NULL;
        ListNode *front = curr;
        return recursiveApproach(curr, back, front);
    }
};