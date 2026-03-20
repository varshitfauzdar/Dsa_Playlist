class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return NULL;

        // Step 1: check if k nodes exist
        ListNode* temp = head;
        for(int i = 0; i < k; i++){
            if(!temp) return head;
            temp = temp->next;
        }

        // Step 2: reverse k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;

        for(int i = 0; i < k; i++){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Step 3: connect rest
        head->next = reverseKGroup(curr, k);

        return prev;
    }
};