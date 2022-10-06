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
    ListNode* deleteDuplicates(ListNode* head) {
      // special case
      if (head == NULL)
        return head;
      
      ListNode *pFast = head;
      ListNode *pSlow = head;
      for (; pFast != NULL; pFast = pFast->next) {
        if (pSlow->val < pFast->val) {
          pSlow->next->val = pFast->val;
          pSlow = pSlow->next;
        }
      }
      
      pSlow->next = NULL;
      return head;
    }
};
