class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast->next!=NULL){
            slow = slow -> next;
            fast= fast -> next;
            if(fast -> next != NULL)
            fast=fast -> next;
        }
        return slow->data;
    }
};
