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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummy = new ListNode(-1);
        ListNode* x = dummy;

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        while(t1!=NULL && t2!=NULL){
            if(t1->val < t2->val){
                x->next = t1;
                x = x->next;
                t1 = t1->next;
            }
            else if(t1->val > t2->val){
                x->next = t2;
                x = x->next;
                t2 = t2->next;
            }
            else{
                x->next = t1;
                x = x->next;
                t1 = t1->next;
            }
        }
        while(t1){
            x->next = t1;
            x = x->next;
            t1 = t1->next;
        }
        while(t2){
            x->next = t2;
            x = x->next;
            t2 = t2->next;
        }
        return dummy->next;
    }
};