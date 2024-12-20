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

        // slow and fast pointers approach
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next != NULL)
        {
            fast = fast->next;
            if(fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

    // reverse
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

    bool compareList(ListNode* head, ListNode* head2)
    {
        while(head2 != NULL)
        {
            if(head->val != head2->val)
            {
                return false;
            }
            else
            {
                head = head->next;
                head2 = head2->next;
            }
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        
        // step1: break LL in two half parts
        ListNode* mid = middleNode(head);
        ListNode* head2 = mid->next;
        mid->next = NULL;
        // step2: reverse second half
        ListNode* prev = NULL;
        ListNode* curr = head2;
        head2 = reveseUningRecursion(prev, curr);
        // step3: compare two parts
        bool ans = compareList(head,head2);
        return ans;

    }
};