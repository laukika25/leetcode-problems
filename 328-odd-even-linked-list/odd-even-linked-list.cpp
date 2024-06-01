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
        if(head == NULL || head->next == NULL)return head;
        ListNode* dum1 = new ListNode(-1);
        ListNode* x = dum1;
        ListNode* temp = head;

        while(temp!=NULL && temp->next!=NULL){
            ListNode* newnode = new ListNode(temp->val);
            x->next = newnode;
            x = x->next;
            temp = temp->next->next;
        }
        if(temp){
            ListNode* newnode = new ListNode(temp->val);
            x->next = newnode;
            x = x->next;
        }

        ListNode* temp2 = head->next;
        while(temp2!=NULL && temp2->next!=NULL){
            ListNode* newnode = new ListNode(temp2->val);
            x->next = newnode;
            x = x->next;
            temp2 = temp2->next->next;
        }

        if(temp2){
            ListNode* newnode = new ListNode(temp2->val);
            x->next = newnode;
            x = x->next;
        }
        return dum1->next;
    }
};