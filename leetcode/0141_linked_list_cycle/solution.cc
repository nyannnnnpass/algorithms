/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool floydCycleDetection(ListNode *head) {   
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (1) {
            if (fast == NULL ||
                fast->next == NULL)
                return false;
            
            fast = fast->next->next;
            slow = slow->next;
            
            if (fast == slow)
                return true;
        }
    }
    
    bool brentCycleDetection(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        int step_taken = 0;
        int step_limit = 2;
        
        while (1) {
            if (fast == NULL ||
                fast->next == NULL)
                return false;            
            
            fast = fast->next->next;
            step_taken++;
            
            slow = slow->next;
            
            if (fast == slow)
                return true;
            else if (step_taken == step_limit) {
                step_taken = 0;
                step_limit *= 2;
                slow = fast;
            }
        }
    }
    
    bool hasCycle(ListNode *head) {            
        // return floydCycleDetection(head);
        return brentCycleDetection(head);
    }
};
