class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode * slow=head;
        ListNode *fast=head->next;
        while(fast!=NULL){
            if(slow->val == fast->val){
                fast=fast->next;
            }
            else {
                slow->next=fast;
                fast=fast->next;
                slow=slow->next;
            } 
        }
        slow->next=fast;
        return head;
    }
};