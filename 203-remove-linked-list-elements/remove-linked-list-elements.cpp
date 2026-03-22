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
    ListNode* removeElements(ListNode* head, int val) {
        // Step 1: Create dummy node
        ListNode dummy(0);
        dummy.next = head;

        // Step 2: Traverse
        ListNode* curr = &dummy;

        while(curr->next){
            if(curr->next->val == val){
                // Step 3: Skip (delete) node
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        // Step 4: Return new head
        return dummy.next;
    }
};