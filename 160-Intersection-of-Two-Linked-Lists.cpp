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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* mA = headA;
        ListNode* mB = headB;
        map<ListNode*, int> mpp;
        while (mA != NULL || mB != NULL) {
            if (mA) {
                if (mpp.find(mA) != mpp.end()) {
                    return mA;
                } else {
                    mpp[mA] = mA->val;
                }
                mA = mA->next;
            }
            if (mB) {
                if (mpp.find(mB) != mpp.end()){
                    return mB;
                } else {
                    mpp[mB] = mB->val;
                }
                mB = mB->next;
            }
        }
        return NULL;
    }
};