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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *pPre = new ListNode(0, head);
        ListNode *pStart = pPre;
        ListNode *pEnd = pPre;
        
        for (int i = 0; i < n; ++i) {
            pStart = pStart->next;
        }
        
        while (pStart->next != NULL) {
            pStart = pStart->next;
            pEnd = pEnd->next;
        }
        pEnd->next = pEnd->next->next;
        
        return pPre->next;
    }
};
