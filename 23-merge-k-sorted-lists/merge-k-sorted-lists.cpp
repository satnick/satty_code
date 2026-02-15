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

// 2. Define a custom comparator for the priority queue
// This comparator makes the priority queue a min-heap (smallest element at the top)
struct CompareNodes {
    bool operator()(ListNode* const& n1, ListNode* const& n2) {
        // For a min-heap, return true if n1 is greater than n2
        return n1->val > n2->val;
    }
};

    ListNode* mergeKLists(vector<ListNode*>& lists) {
       // priority_queue<int> pq;

       if(lists.size() == 0) 
         return nullptr;

        priority_queue<ListNode*, std::vector<ListNode*>, CompareNodes> pq; //min_heap;
        for(int i=0; i<lists.size(); i++)
        {
            if(lists[i] != nullptr)
                pq.push(lists[i]);
        }

        
        ListNode *dummy = new ListNode(-1);
        ListNode *tail = dummy;

        while(pq.size() > 0)
        {
            ListNode *node = pq.top();
            pq.pop();

            tail->next = node;
            tail = tail->next;

            if(node->next != nullptr)
                pq.push(node->next);

            
        }

        return dummy->next;

        
    }
};