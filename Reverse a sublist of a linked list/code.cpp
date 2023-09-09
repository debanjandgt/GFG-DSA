class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        vector<Node*> vec;
        Node* temp=head;
        while(temp)
        {
            vec.push_back(temp);
            temp=temp->next;
        }
        m-=1;
        n-=1;
        while(m<n)
        {
            swap(vec[m],vec[n]);
            m++;
            n--;
        }
        for(int i=0;i<vec.size()-1;i++)
        {
            vec[i]->next=vec[i+1];
        }
        vec[vec.size()-1]->next=NULL;
        return vec[0];
    }
};
