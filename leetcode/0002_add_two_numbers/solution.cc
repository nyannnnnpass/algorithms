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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *resHead = new ListNode(-1);
        ListNode *res = resHead;

        int carry_bit = 0;
        int bit = 0;

        while (p1 != NULL && p2 != NULL)
        {
            bit = (carry_bit + p1->val + p2->val) % 10;
            carry_bit = (carry_bit + p1->val + p2->val) / 10;
            res->next = new ListNode(bit);
            res = res->next;
            p1 = p1->next;
            p2 = p2->next;
        } 

        ListNode *p3 = (p1 == NULL ? p2 : p1);
        while (p3 != NULL) 
        {
            bit = (carry_bit + p3->val) % 10;
            carry_bit = (carry_bit + p3->val) / 10;
            res->next = new ListNode(bit);
            res = res->next;
            p3 = p3->next;
        }

        if (carry_bit != 0) 
        {
            res->next = new ListNode(carry_bit);
        }

        return resHead->next;
    }
};
