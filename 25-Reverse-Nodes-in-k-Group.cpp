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
    ListNode* reverseLL(ListNode* head) {
        ListNode* curr = head;
        ListNode* back = NULL;
        ListNode* front = curr;
        while (curr != NULL) {
            front = curr->next;
            curr->next = back;
            back = curr;
            curr = front;
        }
        return back;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* mover = head;
        vector<ListNode *> headStore;
        headStore.push_back(head);
        int counter = k;
        ListNode *temp = mover;
        while (mover!=NULL){
            counter--;
            if (counter == 0){
                headStore.push_back(mover->next);
                counter = k;
            }
            temp = mover;
            mover = mover->next;
            if (counter == k) temp->next = NULL;
        }
        for (int i=0; i<headStore.size()-1; i++){
            headStore[i] = reverseLL(headStore[i]);
        }
        head = headStore[0];
        for (int i=0; i<headStore.size()-1; i++){
            ListNode *mv = headStore[i];
            while (mv->next!=NULL){
                mv = mv->next;
            }
            mv->next = headStore[i+1];
        }
        return head;
    }
};