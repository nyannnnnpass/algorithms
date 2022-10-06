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
  ListNode* partition(ListNode* head, int x) {
    ListNode *pBigHead = new ListNode(-1);
    ListNode *pSmallHead = new ListNode(-1);
    ListNode *pBig = pBigHead;
    ListNode *pSmall = pSmallHead;
    ListNode *p = head;
    
    while (p != NULL) {
      if (p->val < x) {
        pSmall->next = p;
        pSmall = pSmall->next;
      } else {
        pBig->next = p;
        pBig = pBig->next;
      }
      ListNode *temp = p;
      p = p->next;
      temp->next = NULL;
    }
    pSmall->next = pBigHead->next;
    
    return pSmallHead->next;
  }
};
