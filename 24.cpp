class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode * p=head;
        ListNode * q;
        ListNode * y=p->next;
        ListNode * temp;
        while(1 && y!=NULL){
            q=p->next;
            temp=q->next;
            q->next=p;
            if(temp==NULL || temp->next==NULL){
                p->next=temp;
                break;
            }
            p->next=temp->next;
            p=temp;   
        }
        if(y!=NULL){
            return y;
        }
        else{
            return p;
        } 
    }
};