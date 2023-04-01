class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* temp=head;
        set<Node*> s;
        Node* prev=NULL;
        while(temp!=NULL)
        {
            if(s.find(temp) == s.end())
            {
                s.insert(temp);
                prev=temp;
                temp=temp->next;
            }
            else
            {
                prev->next =NULL;
                break;
            }
        }
        
    }
};
