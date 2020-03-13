
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        ListNode *a =head;
        ListNode *b=head;
        int count=0;
        while(a->next!=NULL && b->next!=NULL && b->next->next!=NULL)
        {
            a=a->next;
            b=b->next->next;
            if(a==b){
                count++;
                break;
            }
        }
        if(count==0){
            return NULL;
        }
        
         b=head;
        while(b!=a)
        {
            b=b->next;
            a=a->next;
        }  
    
    return a;
    }
    
};