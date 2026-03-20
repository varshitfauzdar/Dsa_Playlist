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
        ListNode* prev = NULL;
        while(head){
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);

        ListNode* temp = head;
        int carry = 0;

        while(temp){
            int val = temp->val * 2 + carry;
            temp->val = val % 10;
            carry = val / 10;

            if(!temp->next) break;
            temp = temp->next;
        }

        // handle last carry properly
        if(carry){
            temp->next = new ListNode(carry);
        }

        return reverse(head);
    }
};