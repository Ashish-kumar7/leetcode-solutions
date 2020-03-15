class Solution {
public:
        
       ListNode* removeElements(ListNode* head, int val) {
        
        ListNode dummy(-1);
        dummy.next = head;
        ListNode* curr = &dummy;
        
        while(curr->next)
        {
            if(curr->next->val == val)
            {
                ListNode* nextNode = curr->next->next;
                curr->next = nextNode;
            }
            else
                curr = curr->next;
        }
        
        return dummy.next;
    }
};