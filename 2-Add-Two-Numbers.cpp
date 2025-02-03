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
    ListNode* addLLs(ListNode* l1, ListNode* l2) {
        ListNode* m1 = l1;
        ListNode* m2 = l2;
        while (m1 != NULL) {
            if (m2) {
                m1->val = m1->val + m2->val;
                m2 = m2->next;
            }
            if (m1->val >= 10) {
                m1->val = m1->val % 10;
                if (m1->next==NULL){
                    ListNode *lastNode = new ListNode();
                    m1->next=lastNode;
                }
                m1->next->val++;
            }
            m1 = m1->next;
        }
        return l1;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* m1 = l1;
        ListNode* m2 = l2;
        ListNode* ans;
        int s1 = 0, s2 = 0;
        while (m1 != NULL) {
            s1++;
            m1 = m1->next;
        }
        while (m2 != NULL) {
            s2++;
            m2 = m2->next;
        }
        if (s1 >= s2) {
            ans = addLLs(l1, l2);
        } else {
            ans = addLLs(l2, l1);
        }
        return ans;
    }
};