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
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL){
            ListNode* forward = temp->next;
            temp->next = prev;
            prev = temp;
            temp = forward;
        }
        return prev;
    }

    int getDecimalValue(ListNode* head) {
        head = reverse(head);
        ListNode* temp = head;
        int value = 0;
        long int pow = 1;
        while(temp !=NULL){
            value += temp->val * pow;
            pow = pow * 2;
            temp = temp->next;
        }
        return value;
    }
};