class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        deque<Node*> dq;
        Node* temp=head;
        while(temp)
        {
            dq.push_back(temp);
            temp=temp->next;
        }
        while(k>0)
        {
            Node* t=dq.front();
            dq.pop_front();
            dq.push_back(t);
            k--;
        }
        for(int i=0;i<dq.size()-1;i++)
        {
            dq[i]->next=dq[i+1];
        }
        dq[dq.size()-1]->next=NULL;
        return dq[0];
    }
};
