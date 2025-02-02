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
    bool isPalindrome(ListNode* head) {
        // takes an extra array space

        // vector<int> storage;
        // ListNode *mover = head;
        // while(mover!=NULL){
        //     storage.push_back(mover->val);
        //     mover=mover->next;
        // }
        // int low=0, high = storage.size()-1;
        // while(low<=high){
        //     if (storage[low]!=storage[high]){
        //         return false;
        //     }
        //     low++;
        //     high--;
        // }
        // return true;

        // O(1) space complexity

        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *first;
        ListNode *second;

        if (head->next==NULL)
        return true;

        while (fast!=NULL && fast->next!=NULL){
            if (fast->next==NULL){
                first = head;
                second = slow->next;
                break;
            }
            else if (fast->next->next==NULL){
                first = head;
                second = slow->next;
                slow = slow->next;
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        // reversing the second half
        ListNode *back = NULL;
        ListNode *curr = second;
        ListNode *front = curr;
        while(curr!=NULL){
            front = curr->next;
            curr->next = back;
            back = curr;
            curr = front;
        }
        second = back;
        // iterating both halves and comparing
        while (second!=NULL && first!=slow){
            if (first->val != second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }
};