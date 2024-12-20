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

    // find length of LL
    int findLength(ListNode* head)
    {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* middleNode(ListNode* head) {
        int n = findLength(head);
        int mid = (n/2) +1;

        ListNode* temp = head;
        while(mid != 1)
        {
            mid--;
            temp = temp->next;
        }
        return temp;
    }
};