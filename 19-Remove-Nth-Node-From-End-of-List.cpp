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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // two-pass approach
        // if (head->next == NULL) {
        //     return NULL;
        // }
        // ListNode* mover = head;
        // int count = 0;
        // while (mover != NULL) {
        //     count++;
        //     mover = mover->next;
        // }
        // if (count == n)
        //     return head->next;
        // mover = head;
        // int pCnt = 0;
        // while (mover != NULL) {
        //     pCnt++;
        //     if (pCnt == count - n) {
        //         mover->next = mover->next->next;
        //     } else {
        //         mover = mover->next;
        //     }
        // }
        // return head;

        // single pass approach but ganda approach
        // if (head->next == NULL)
        //     return NULL;

        // ListNode* mover = head;
        // map<int, ListNode*> mpp;
        // int i = 0;
        // while (mover != NULL) {
        //     mpp[++i] = mover;
        //     mover = mover->next;
        // }
        // for (auto it : mpp){
        //     cout<<it.first<<", "<<it.second<<endl;
        // }
        
        // if (i == n) return head->next;
        // ListNode* temp = mpp[i - n];
        // cout<<temp << i-n;
        // temp->next = temp->next->next;
        // return head;

        // single pass approach
        ListNode* res = new ListNode(0, head);
        ListNode* dummy = res;

        for (int i = 0; i < n; i++) {
            head = head->next;
        }

        while (head != nullptr) {
            head = head->next;
            dummy = dummy->next;
        }

        dummy->next = dummy->next->next;

        return res->next;
    }
};