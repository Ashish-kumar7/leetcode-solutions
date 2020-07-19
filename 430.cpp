class Solution {
public:
    Node * solve(Node * root){
        Node * curr=root;
        Node * tail=root;
        while(curr){
            Node * child=curr->child;
            Node * next=curr->next;
            if(child){
                Node * _tail=solve(child);
                _tail->next=next;
                if(next){
                    next->prev=_tail;
                }
                curr->next=child;
                child->prev=curr;
                curr->child=NULL;
                curr=_tail;
            } 
            else {
                curr=next;
            }
            if(curr){
                tail=curr;
            }  
        }
        return tail;
    }
Node* flatten(Node* head) {
        if(head){
            solve(head);
        }
        return head;
    }
};