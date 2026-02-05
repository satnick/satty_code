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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == nullptr && list2 == nullptr)
        return nullptr;

         if(list1 == nullptr )
            return list2;

        
         if(list2 == nullptr )
            return list1;

        ListNode* head;
        ListNode *cur;

        if(list1 && list2 && list1->val < list2->val )
        {
            head = list1;
            cur = list1;
            list1 = list1->next;
        }
        else if(list1 && list2 && list1->val >= list2->val)
        {
            head = list2;
            cur = list2;
            list2 = list2->next;
        }

        while(list1 && list2)
        {
            if(list1->val < list2->val )
            {
                cur->next = list1;
                cur = list1;
                list1 = list1->next;
            }
            else
            {
                cur->next = list2;
                cur = list2;
                list2 = list2->next;
            }
        }

        if(list1)
        {
            cur->next = list1;
        }

        if(list2)
        {
            cur->next = list2;
        }

        return head;


        
    }
};