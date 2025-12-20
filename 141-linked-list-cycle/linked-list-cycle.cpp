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
    bool hasCycle(ListNode *head) {

        if(head ==nullptr)
        return false;

        ListNode *first = head, *second = head->next;;

        while(first!=second && second!=nullptr && second->next !=nullptr)
        {
            first = first->next;
            second = second->next->next;
        }

        if(first == second)
            return true;

        return false;
        
    }
};