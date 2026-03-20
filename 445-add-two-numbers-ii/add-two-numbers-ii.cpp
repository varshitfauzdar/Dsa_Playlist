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
    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {       // spcae = O(n) time = O(1)
    //     stack<int> s1, s2;

    //     while(l1){
    //         s1.push(l1->val);
    //         l1 = l1->next;
    //     }
    //     while(l2){
    //         s2.push(l2->val);
    //         l2 = l2->next;
    //     }

    //     int carry = 0;
    //     ListNode* head = NULL;

    //     while(!s1.empty() || !s2.empty() || carry){
    //         int sum = carry;

    //         if(!s1.empty()){
    //             sum += s1.top(); s1.pop();
    //         }
    //         if(!s2.empty()){
    //             sum += s2.top(); s2.pop();
    //         }

    //         ListNode* node = new ListNode(sum % 10);
    //         node->next = head;
    //         head = node;

    //         carry = sum / 10;
    //     }

    //     return head;
    // }

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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {   // spcae = O(1) time = O(n)
        // Step 1: Reverse both
        l1 = reverse(l1);
        l2 = reverse(l2);

        // Step 2: Add like LC-2
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while(l1 || l2 || carry){
            int sum = carry;

            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            curr->next = new ListNode(sum % 10);
            carry = sum / 10;
            curr = curr->next;
        }

        // Step 3: Reverse result
        return reverse(dummy->next);
    }
};