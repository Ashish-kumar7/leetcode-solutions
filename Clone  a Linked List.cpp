class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        Node * temp=head;
        Node * temp_next;
        while(temp!=NULL){
            temp_next=temp->next;
            Node * naya=new Node(temp->val);
            temp->next=naya;;
            naya->next=temp_next;
            temp=temp_next;
        }
        temp=head;
        Node * oldhead=head;
        Node * newhead=head->next;
        while(oldhead){
            if(oldhead->next){
                oldhead->next->random=oldhead->random?oldhead->random->next:oldhead->random;
            }
            oldhead=oldhead->next?oldhead->next->next:oldhead->next;
        }
        Node * original=head;
        Node * duplicate=head->next;
        Node * original1=original;
        Node * duplicate1=duplicate;
        while(original && duplicate ){
            original->next=original->next?original->next->next:original->next;
            duplicate->next=duplicate->next?duplicate->next->next:duplicate->next;
            original=original->next;
            duplicate=duplicate->next;
        } return duplicate1;
    }
};