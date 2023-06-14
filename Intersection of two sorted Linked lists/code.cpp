Node* findIntersection(Node* head1, Node* head2)
{
   
    vector<Node*> vec;
   
    Node* t1=head1;
    map<int,int> m;
    while(t1)
    {
        m[t1->data]++;
        t1=t1->next;
    }
    t1=head2;
    while(t1)
    {
        int v=t1->data;
        if(m[v] > 0)
        {
            vec.push_back(t1);
            m[v]--;
        }
        t1=t1->next;
    }
    for(int i=0;i<vec.size()-1;i++)
    {
        vec[i]->next=vec[i+1];
    }
    vec[vec.size()-1]->next=NULL;
    return vec[0];
}
