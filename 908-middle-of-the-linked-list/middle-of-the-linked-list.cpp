class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {  //as we know fast is travelling 2x..thats why we need to check null condition for last two element;
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
