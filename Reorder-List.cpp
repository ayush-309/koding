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
    ListNode* reverseList(ListNode *head){
        ListNode *prev=NULL, *curr=head, *aage=head;
        while (curr != NULL){
            aage = aage->next;
            curr->next = prev;
            prev = curr;
            curr = aage;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head;

        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* part = reverseList(slow->next);
        slow->next = NULL;
        ListNode* mover = head;

        while (mover != NULL && part != NULL){
            slow = mover->next;
            mover->next = part;
            mover = slow;
            fast = part->next;
            part->next = slow;
            part = fast;
        }

        // if (head->next == NULL || head->next->next == NULL) return;

        // vector<ListNode *> store; 
        // ListNode *mover = head;

        // while (mover!=NULL){
        //     store.push_back(mover);
        //     mover = mover->next;
        // }

        // int n = store.size()-1;
        // int i=1;

        // mover = head;
        // while (i<=n){
        //     mover->next = store[n--];
        //     mover = mover->next;
        //     if (n<i) break;
        //     mover->next = store[i++];
        //     mover = mover->next;
        // }
        // mover->next = NULL;
    }
};