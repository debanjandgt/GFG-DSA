Node * removeDuplicates( Node *head) 
    {
        if(head == NULL)
        return head;
     map<int,bool> m;
     m[head->data]=true;
     Node* copy=head;
     Node* fwd=copy->next;
     while(fwd != NULL){
         if(m[fwd->data]==true){
           fwd=fwd->next;  
         }
         
         else{
             copy->next=fwd;
             copy=copy -> next;
             m[fwd->data]=true;
         }
     }
     copy->next=NULL;
     return head;
    }
};
