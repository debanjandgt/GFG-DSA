class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        deque<Node*> dq;
        vector<Node*> vec;
        Node* t=head;
        while(t)
        {
            vec.push_back(t);
            t=t->next;
        }
        int prev=-1e9;
        for(int i=vec.size()-1;i>=0;i--)
        {
            int val=vec[i]->data;
            if(val>=prev)
            {
                dq.push_front(vec[i]);
                prev=val;
            }
        }
        for(int i=0;i<dq.size()-1;i++)
        {
            dq[i]->next=dq[i+1];
        }
        dq[dq.size()-1]->next=NULL;
        return dq[0];
    }
    
};
