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
    ListNode *detectCycle(ListNode *head) {
        // step1: check for loop
        // slow and fast pointers approach
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
            if(slow == fast){
                break;
                // loop present
            }
        }
        // no cycle present
        if(fast == NULL){
            return NULL;
        }
        
        // step2: find startinf point of loop
        slow = head;
        if(slow != fast){
            // 1 step forword
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
        
    }
};



