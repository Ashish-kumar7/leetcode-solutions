class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return 0;
        }
        ListNode * a=head;
        ListNode *b=head ;
        while( (b->next!=NULL && b->next->next!=NULL)){
            a=a->next;
            b=b->next->next;
            if(a==b){
                return 1;
            }
        }        
        return 0;  
    }
};