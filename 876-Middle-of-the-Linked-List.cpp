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
    ListNode* middleNode(ListNode* head) {
        if (head->next == NULL){
            return head;
        }
        ListNode *mover = head;
        int count = 1;
        while (mover->next!=NULL){
            count++;
            mover =  mover->next;
        }
        int index;
        if (count%2==0){
            index = count/2+1;
        } else {
            index = (count+1)/2;
        }
        count = 1;
        mover = head;
        while (count!=index){
            count++;
            mover = mover->next;
        }
        return mover;
    }
};