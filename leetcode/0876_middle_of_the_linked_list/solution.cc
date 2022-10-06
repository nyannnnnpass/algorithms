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
    ListNode* middleNode(ListNode* head) {
      ListNode *pFast = head;
      ListNode *pSlow = head;
      int count = 1;
      
      while (pFast->next != NULL) {
        pFast = pFast->next;
        count++;
        if (count == 2) {
          count = 0;
          pSlow = pSlow->next;
        }
      }
      
      return pSlow;
    }
};
