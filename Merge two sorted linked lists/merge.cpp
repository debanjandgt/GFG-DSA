//Function to merge two sorted linked list.
#include<bits/stdc++.h>
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node* temp=head1;
    while(temp -> next != NULL)
    temp= temp -> next;
    temp->next=head2;
    vector<int> v;
    Node* copy =head1;
    while(copy != NULL){
        v.push_back(copy -> data);
        copy = copy -> next;
    }
    sort(v.begin(),v.end());
    copy =head1;
    int i=0;
    while(copy != NULL){
        copy -> data =v[i];
        copy = copy -> next;
        i++;
    }
    return head1;
}  
