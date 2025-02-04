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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL || head->next==NULL) return head;
        ListNode *mover = head;
        ListNode *temp;
        int n = 0;
        while (mover!=NULL){
            n++;
            mover = mover->next;
        }
        int rotations = k%n;
        while (rotations>0){
            mover = head;
            while (mover->next->next!=NULL){
                mover = mover->next;
            }
            temp = mover;
            mover = mover->next;
            temp->next = NULL;
            mover->next = head;
            head = mover;
            rotations--;
        }
        return head;
    }
};