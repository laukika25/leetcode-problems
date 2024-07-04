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
    ListNode* mergeNodes(ListNode* head) {
    if (!head || !head->next) // Handling empty list or single node
        return head;

    ListNode* dummy = new ListNode(-1); // Dummy node for easy manipulation
    ListNode* current = dummy; // Pointer to the current node in the modified list

    int sum = 0; // Variable to store the sum of consecutive non-zero values

    while (head) {
        if (head->val == 0) {
            if (sum != 0) { // If there were non-zero values accumulated
                ListNode* sumNode = new ListNode(sum); // Create a new node with the sum
                current->next = sumNode; // Append it to the result list
                current = current->next; // Move current pointer forward
                sum = 0; // Reset sum for the next sequence of non-zero values
            }
        } else {
            sum += head->val; // Accumulate non-zero values
        }
        head = head->next; // Move forward in the original list
    }

    if (sum != 0) { // Handle the case when the list ends with a sequence of non-zero values
        ListNode* sumNode = new ListNode(sum); // Create a new node with the sum
        current->next = sumNode; // Append it to the result list
    }

    return dummy->next; // Return the modified list, skipping the dummy node
}
};