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

/*
 * Recursion
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      if (head == NULL || head->next == NULL) {
        return head;
      }
      ListNode *last = reverseList(head->next);
      head->next->next = head;
      head->next = NULL;

      return last;
    }
};

/*
 * Two pointers
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode *pPre = NULL;
      ListNode *pCurrent = head;
      
      while (pCurrent != NULL) {
        ListNode *pNext = pCurrent->next;
        pCurrent->next = pPre;
        pPre = pCurrent;
        pCurrent = pNext;
      }
      
      return pPre;
    }
};
