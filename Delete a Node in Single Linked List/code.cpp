Node* deleteNode(Node *head,int x)
{
    Node *prev=NULL;
    Node *curr=head;
    Node* temp=head;
    int i=1;
    if(x==1)
    return head->next;
    while(temp!=NULL)
    {
        if(i==x)
        {
            prev->next=curr->next;
            curr->next=NULL;
            break;
        }
        temp=temp->next;
        prev=curr;
        curr=temp;
        i++;
    }
    return head;
}
