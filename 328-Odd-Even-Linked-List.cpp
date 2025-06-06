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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* eHead = even;

        while (odd != NULL && even != NULL) {
            if (odd->next==NULL){
                even->next=NULL;
                break;
            }
            if (even->next==NULL){
                break;
            }
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = even->next->next;
            even = even->next;
        }
        odd->next=eHead;
        return head;
    }
};