class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode * start=head;
        ListNode * next=NULL;
        ListNode * prev=NULL;
        
        while(start!=NULL)
        {
            next=start->next;
            start->next=prev;
            prev=start;
            start=next;     
        }
        head=prev;
        return head;
    }
};