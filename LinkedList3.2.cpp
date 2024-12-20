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
    ListNode* reveseUningRecursion(ListNode* &prev, ListNode* &curr)
    {
        // base case
        if(curr == NULL)
        {
            return prev;
        }

        // one case I will solve
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;

        // rest recursion will take care
        return reveseUningRecursion(prev, curr);
    }
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        // using recursion
        return reveseUningRecursion(prev, curr);
        
    }
};