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
    // Mine brute force approach

    // ListNode* middleNode(ListNode* head) {
    //     if (head->next == NULL){
    //         return head;
    //     }
    //     ListNode *mover = head;
    //     int count = 1;
    //     while (mover->next!=NULL){
    //         count++;
    //         mover =  mover->next;
    //     }
    //     int index = count/2+1;
    //     count = 1;
    //     mover = head;
    //     while (count!=index){
    //         count++;
    //         mover = mover->next;
    //     }
    //     return mover;
    // }

    // two-pointer approach (slow and fast pointers)

    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
            if (fast->next!=NULL){
                fast = fast->next;
            }
        }
        return slow;
    }
};