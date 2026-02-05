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

        ListNode *slow, *fast;
        slow = head;
        fast = head;
        if(head == nullptr) 
            return nullptr;

        while(fast->next && fast->next->next)
        {
            slow= slow->next;
            fast = fast->next->next;

            if(fast == slow) break;
        }

        if(fast->next == nullptr || fast->next->next == nullptr)
            return nullptr;

        slow = head;

        while(slow != fast)
        {
            slow = slow->next;
            fast= fast->next;
        }

        return slow;
        
    }
};