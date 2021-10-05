class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * slow=head;
        ListNode * fast=head;
        while(slow!=NULL && fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return slow;
    }
};