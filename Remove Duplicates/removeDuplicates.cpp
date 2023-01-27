Node *removeDuplicates(Node *head)
{
    Node *copy=head;
    Node *fwd=head->next;
    while(fwd != NULL){
        if(copy->data == fwd-> data){
            fwd=fwd -> next;
    }
    else{
        copy -> next = fwd;
        copy=copy -> next;
        fwd=fwd->next;
    }
}
copy -> next =NULL;
return head;
}
